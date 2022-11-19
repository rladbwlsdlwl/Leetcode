class Solution {
public:
    vector<int> num;
    int size;
    Solution(vector<int>& nums) {
        num = nums;
        size = nums.size();
    }
    
    int pick(int target) {
        int rand_idx = rand()%size;
        
        while(num[rand_idx] != target)
            rand_idx = rand()%size;
        
        return rand_idx;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
