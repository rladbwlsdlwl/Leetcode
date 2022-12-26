class Solution {
public:
    bool canJump(vector<int>& nums) {
        int move[10000] = {0, };

        // avaliable move
        move[0] = nums[0];
        for(int i=1; i<nums.size(); i++)
            move[i] = max(move[i-1]-1, nums[i]);
        
        // check stop part 
        for(int i=0; i<nums.size()-1; i++){
            if(move[i] == 0)
                return false;
        }

        return true;
    }
};

