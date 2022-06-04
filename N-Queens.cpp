class Solution {
private:
    vector<string>queens;
    vector<vector<string>>ans;
    vector<int>tmp;
    int N;
public:
    vector<vector<string>> solveNQueens(int n) {
        N=n;
        init(n);
        dfs(0);
        
        return ans;
    }
    
    void init(int n){
        string s;
        for(int i=0;i<n;i++)
            s+='.';
        for(int i=0;i<n;i++)
            queens.push_back(s);
    }
    void dfs(int n){
        if(n==N)
            ans.push_back(queens);
        else{
            for(int i=0;i<N;i++){
                if(isValid(i)){
                    queens[n][i]='Q';
                    tmp.push_back(i);
                    
                    dfs(n+1);
                    
                    queens[n][i]='.';
                    tmp.pop_back();
                }
            }
        }
    }
    
    bool isValid(int n){
        for(int i=0;i<tmp.size();i++){
            if(n==tmp[i] || n==tmp[i]-tmp.size()+i || n==tmp[i]+tmp.size()-i)
                return false;
        }
        
        return true;
    }
};
