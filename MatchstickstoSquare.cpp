class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        int sumOfSide=0;
        for(auto n: matchsticks)
            sumOfSide+=n;
        
        if(matchsticks.size()<4 || sumOfSide%4)
            return false;
        
        vector<int>ans(4,sumOfSide/4);
        sort(matchsticks.begin(), matchsticks.end(), [](const int &a, const int &b){
           return a>b; 
        }); // descending
        
        return dfs(matchsticks, ans, 0);
    }
    
    bool dfs(vector<int>& stick, vector<int>& side, int idx){
        if(idx==stick.size())
            return true;
        
        for(int i=0;i<4;i++){
            if(side[i]>=stick[idx]){
                side[i]-=stick[idx];
                if(dfs(stick, side, idx+1))
                    return true;
                side[i]+=stick[idx];
            }
        }
        
        return false;
    }
};
