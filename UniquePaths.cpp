class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[100][100]={1, }; // init 1 0 0 0 ...
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j+1<n)
                    dp[i][j+1]+=dp[i][j];
                if(i+1<m)
                    dp[i+1][j]+=dp[i][j];
            }
        }
        
        return dp[m-1][n-1];
    }
};
