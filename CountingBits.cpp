class Solution {
public:
    vector<int> countBits(int n) {
        if(n==0)
            return {0};
        else if(n==1)
            return {0, 1};
        
        vector<int> dp={0, 1};
        
        while(dp.size()<=n){
            int size=dp.size();
            for(int j=1; j<size-1; j++){
                if(dp.size()>n) break;
                dp.push_back(1+dp[j]);
            }
            
            if(dp.size()>n)
                break;
            dp.push_back(1); // 2 4 8 ...
        }
        
        return dp;
    }
    
};
