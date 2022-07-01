#ifndef GRIDSTATE_H
#define GRIDSTATE_H

#include <stdlib.h>
#include <vector>
#include <string>
#include <time.h>

class State
{
    private:
        int gridwidth;
        int gridheight;
        float gamma;
        float transition_succ;
        float transition_fail;
        int reward;
        int index_x;
        int index_y;
    public:
        void assign_reward(int);
        void assign_index(int, int);
        int get_gridwidth();
        int get_gridheight();
        float get_gamma();
        float get_transition_succ();
        float get_transition_fail();
        int get_reward();
        int action_succ(int);
};

#endif