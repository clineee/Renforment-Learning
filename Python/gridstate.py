from math import gamma
import numpy as np
import sys
import time
import random


class State():
    def __init__(self):
        self.gridwidth = 4
        self.gridheight = 4
        self.gamma = 0.99
        self.transition_succ = 0.8
        self.transition_fail = 0.2
        
        def set_reward(self, r):
            self.reward = r
            
        def set_index(self, x, y):
            self.index_x = x
            self.index_y = y
            
        def get_gridwidth(self):
            return self.gridwidth
        
        def get_gridheight(self):
            return self.gridwidth
        
        def get_gamma(self):
            return self.gamma
        
        def get_gridwidth(self):
            return self.gridwidth
        
        def get_gamma(self):
            return self.gamma
        
        def get_transtion_succ():
            return self.transition_succ
        
        def get_transtion_fail():
            return self.transition_fail
        
        def get_reward():
            return self.reward
            
        def action_succ(self, action):
            final = False
            copy_action = action
            
            while not final:
                succ_fail = random.uniform(1,10)
                if succ_fail > self.transition_succ * 10:
                    action = random.uniform(0,3)
                    
                if ((self.index_x == 0) and (action == 0)) or ((self.index_x == 3) and (action == 2)):
                    final = False
                    action = copy_action
                    
                if ((self.index_y == 0) and (action == 1)) or ((self.index_y == 3) and (action == 3)):
                    final = False
                    action = copy_action
            return action
