class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp;
        
        for(auto n: nums){
            if(dp.empty() || dp.back()<n){
                dp.push_back(n);
                continue;
            }
            
            int i=0;
            while(i<dp.size()){
                if(n<=dp[i]){
                    dp[i]=n;
                    break;
                }
                i++;
            }
        }
        
        return dp.size();
    }
};
