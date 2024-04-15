class Solution {
private:
    vector<int>ans;
public:
    int tmptoInt(vector<int> tmp){
        int n = 0;

        for(auto t: tmp){
            n *= 10;
            n += t;
        }

        return n;
    }
    void dfs(int size, int low, int high, vector<int> tmp){
        int curr = tmp[tmp.size() - 1] + 1;

        tmp.push_back(curr);
        int currTmp = tmptoInt(tmp); 
        if(curr >= 10)
            return;
        else if(size == tmp.size()){
            if(currTmp >= low && currTmp <= high)
                ans.push_back(currTmp);
            
            return;
        }

        dfs(size, low, high, tmp);
    }

    vector<int> sequentialDigits(int low, int high) {
        int lowLen = to_string(low).size(), highLen = to_string(high).size();
       
        for(int i = lowLen; i <= highLen; i++){
            for(int j = 1; j < 10; j++)
                dfs(i, low, high, {j});
        }

        return ans;
    }
};
