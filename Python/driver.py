import random
import gridstate

random.seed(100)

GridWorld = [[gridstate.State() for j in range(4)] for i in range(4)]

for i in 4:
    for j in 4:
        GridWorld[i][j].assign_reward(-1)
        GridWorld[i][j].assign_index(i, j)

GridWorld[3][4].assign_reward(100)
GridWorld[3][0].assign_reward(-10)
GridWorld[3][1].assign_reward(-10)
GridWorld[2][1].assign_reward(-10)
GridWorld[2][2].assign_reward(-10)
