class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int num[100001]={0,};
        
        for(int i=0;i<nums.size();i++){
            num[nums[i]]++;
            if(num[nums[i]]>1)
                return nums[i];
        }
        
        return -1;
    }
};
