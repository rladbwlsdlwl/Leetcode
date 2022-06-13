class Solution {
public:
    const int MAX=10000000;
    
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp(triangle.size(), vector<int>(triangle.size(), MAX));
        dp[0][0]=triangle[0][0];
        
        for(int i=0;i<triangle.size()-1;i++){
            for(int j=0;j<i+1;j++){
                dp[i+1][j]=min(dp[i+1][j], dp[i][j]+triangle[i+1][j]);
                dp[i+1][j+1]=min(dp[i+1][j+1], dp[i][j]+triangle[i+1][j+1]);
            }
        }
        
        int mn=MAX;
        for(int i=0;i<triangle.size();i++)
            mn=min(mn, dp[triangle.size()-1][i]);
        
        return mn;
    }
};
