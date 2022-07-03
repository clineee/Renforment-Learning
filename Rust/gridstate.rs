use rand::Rng;

pub struct State
{
    gridwidth: i32,
    gridheight: i32,
    gamma: f32,
    transition_succ: f32,
    transition_fail: f32,
    reward: i32,
    index_x: i32,
    index_y: i32,
}

impl State
{
    pub fn assign_reward(mut self, r: i32)
    {
        self.reward = r;
    }
    pub fn assign_index(mut self, x: i32, y: i32)
    {
        self.index_x = x;
        self.index_y = y;
    }

    pub fn get_gridwidth(mut self)
    {
        return self.gridwidth;
    }

    pub fn get_gridheight(mut self)
    {
        return self.gridheight;
    }

    pub fn get_gamma(mut self)
    {
        return self.gamma;
    }

    pub fn get_transition_succ(mut self)
    {
        return self.transition_succ;
    }

    pub fn get_transition_fail(mut self)
    {
        return self.transition_fail;
    }

    pub fn get_reward(mut self)
    {
        return self.reward;
    }

    pub fn action_succ(mut self, action: i32)
    {
        let mut rng - rand::thread_rng();
        final: bool = false;
        copy_action = action;

        while !final
        {
            final = true;
            succ_fail: i32 = rng.gen_rang(1..10);

            if succ_fail > (self.transition_succ * 10)
            {
                action = rng.gen_rang(0..3);
            }
            if ((self.index_x == 0) and (action == 0)) or ((self.index_x == 3) and (action == 2))
            {
                final = False;
                action = copy_action;
            }    
            if ((self.index_y == 0) and (action == 1)) or ((self.index_y == 3) and (action == 3))
            {
                final = false;
                action = copy_action;
            }
        }
        return action;
    }
}

impl Default for State
{
    fn default() -> Self{
        Self
        { 
            gridwidth: 4,
            gridheight: 4,
            gamma: 0.99
            transition_succ: 0.8,
            transition_fail: 0.2,
        }
    }
}
