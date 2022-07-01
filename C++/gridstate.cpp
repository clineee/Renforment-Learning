#include "gridstate.h"
#include <stdlib.h>
#include <string>
#include <time.h>

using namespace std;

State::State()
{
    gridwidth = 4;
    gridheight = 4;
    gamma = 0.9;
    transition_succ = 0.8;
    transition_fail = 0.2;

}

void State::assign_reward(int r)
{
    reward = r;
}

void State::assign_index(int ix, int iy)
{
    index_x = ix;
    index_y = iy;
}

int State::get_gridwidth()
{
    return gridwidth;
}

int State::get_gridheight()
{
    return gridheight;
}

float State::get_gamma()
{
    return gamma;
}

float State::get_transition_succ()
{
    return transition_succ;
}

float State::get_transition_fail()
{
    return transition_fail;
}

int State::get_reward()
{
    return reward;
}

int State::action_succ(int action)
{
    bool final = false;
    int copy_action = action;
    while(!final)
    {
        final = true;
        int succ_fail = rand() % 10 + 1;
        if(succ_fail > transition_succ * 10)
        {
            action = rand() % 4;
        }
        if((index_x == 0 && action == 0) || (index_x == 4 && action == 3))
        {
            final = false; 
            action = copy_action;
        }
        if((index_y == 0 && action == 1) || (index_y == 4 && action == 4))
        {
            final = false; 
            action = copy_action;
        }
    }
}