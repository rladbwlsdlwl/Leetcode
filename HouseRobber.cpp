class Solution {
public:
    int rob(vector<int>& nums) {
        int N = nums.size();
        vector<int> dp(N, 0);

        for(int i = 0; i < N; i++){
            int mx = 0;
            for(int j = 0; j < i-1; j++)
                mx = max(mx, dp[j]);
            
            dp[i] = nums[i] + mx;
        }
    
    
        int ans = 0;
        for(int i = 0; i < N; i++)
            ans = max(ans, dp[i]);


        return ans;
    }
};
