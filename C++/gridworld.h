#ifndef GRIDWORLD_H
#define GRIDWORLD_H

#include <stdlib.h>
#include <vector>

class GridWorld
{
    private:
        int gridwidth;
        int gridheight;
        int traffic[4];
        int goal;
        float gamma;
        std::vector<int> policy;
        std::vector<int> rewards;
        std::vector<float> transition;

    public:
        void value_iteration();
        //void policy iteration();
        //
};

#endif