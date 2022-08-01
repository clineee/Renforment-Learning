#include <stdlib.h>
#include <iostream>
#include <vector>
//#include <time.h>

#include "gridstate.h"
#include "VI_agent.h"

using namespace std;


int main()
{
    srand(100);
    State GridWorld[16];
    for(int i = 0; i < 4; i++)
    {
            GridWorld[i].assign_reward(-1);
            GridWorld[i].assign_index(i);
    }
    GridWorld[11].assign_reward(100);
    GridWorld[3].assign_reward(-10);
    GridWorld[6].assign_reward(-10);
    GridWorld[7].assign_reward(-10);
    GridWorld[10].assign_reward(-10);

    return 0;
}