class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();

        for(int i=1; i<M; i++){
            for(int j=0; j<N; j++){
                int mn = 100000;
                if(j-1 >= 0)
                    mn = min(mn, matrix[i-1][j-1]);
                if(j+1 < matrix[0].size())
                    mn = min(mn, matrix[i-1][j+1]);
                
                matrix[i][j] += min(mn, matrix[i-1][j]);
            }
        }
        
        int ans = 100000;
        for(int i = 0; i<N; i++)
            ans = min(matrix[M-1][i], ans);
        
        return ans;
    }
};
