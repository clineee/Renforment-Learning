#include <stdlib.h>
#include <iostream>
#include <vector>

#include "gridsquare.h"
//#include "______algorithm.h"

using namespace std;


int main()
{
    GridSquare GridWorld[4][4];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            GridWorld[i][j].set_reward(-1);
            GridWorld[i][j].set_transition(0.8);
        }
    }
    GridWorld[3][4].set_reward(100);
    GridWorld[3][0].set_reward(-10);
    GridWorld[3][1].set_reward(-10);
    GridWorld[2][1].set_reward(-10);
    GridWorld[2][2].set_reward(-10);


    //value iteration
    int V[4][4];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            V[i][j] = 0;
        }
    }
    int V_next[4][4];
    while(V != V_next)
    {
        
    }

    return 0;
}