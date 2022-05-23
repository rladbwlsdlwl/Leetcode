class Solution {
private:
    int dp[101][101];
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        // init dp
        for(int i=0;i<=m;i++)
            fill_n(dp[i],n+1,0);

        for(int i=0;i<strs.size();i++){
            int m_=0,n_=0;
            for(int j=0;j<strs[i].size();j++){
                if(strs[i][j]-'0'==0)
                    m_++;
                else
                    n_++;
            }
            
            for(int p=m;p>=m_;p--){
                for(int q=n;q>=n_;q--){
                    dp[p][q]=max(dp[p][q],dp[p-m_][q-n_]+1);
                }
            }
        }
        
        return dp[m][n];
    }
};
