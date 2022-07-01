#include <stdlib.h>
#include <iostream>
#include <vector>

#include "gridstate.h"
#include "VI_agent.h"

using namespace std;


int main()
{
    State GridWorld[4][4];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            GridWorld[i][j].assign_reward(-1);
        }
    }
    GridWorld[3][4].assign_reward(100);
    GridWorld[3][0].assign_reward(-10);
    GridWorld[3][1].assign_reward(-10);
    GridWorld[2][1].assign_reward(-10);
    GridWorld[2][2].assign_reward(-10);

    return 0;
}