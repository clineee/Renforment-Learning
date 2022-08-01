#include "gridstate.h"
#include <stdlib.h>
#include <string>
//#include <time.h>


void value_iteration(State *gridworld, int size, int num_actions, float gamma)
{
    int limit = 10000;
    float vals[size];
    float vals_next[size];
    for(int i = 0; i < size; i++)
    {
        vals[i] = 0;
        vals_next[i] = 0;
    }

    for(int iterations = 0; iterations < limit; iterations++)
    {
        for(int i = 0; i < size; i++)
        {
            int best_action = -10;
            for(int j = 0; j < num_actions; j++)
            {
                //vals_next[i] = gridworld[i].get_reward() + (gamma);

            }
        }
        if(vals == vals_next)
        {
            //policy
        }
    }

}