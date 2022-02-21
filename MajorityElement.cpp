class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=nums[0];
        int cnt=1;
        
        for(size_t i=1;i<nums.size();i++){
            if(cnt==0){
                major=nums[i];
                cnt=1;
            }
            else if(major==nums[i])
                cnt++;
            else
                cnt--;
        }
        
        return major;
    }
};
