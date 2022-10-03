class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        vector<int>dp(values.size(), 0); // 0 ~ i-1 까지의 수 중 values[i]와 더했을 때 가장 큰 값을 dp[i-1]에 저장 
        int ans=0;
        
        dp[0]=values[0]-1;
        for(int i=1; i<values.size(); i++){
            ans=max(ans, values[i]+dp[i-1]);
            dp[i]=max(dp[i-1], values[i])-1;
        }
        
        
        return ans;
    }
};
