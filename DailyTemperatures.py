class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);

        vector<pair<int, int>> stk; // {temp, index}
        for(int i = 0; i<temperatures.size(); i++){
    
            while(stk.size() && stk[stk.size()-1].first < temperatures[i]){
                pair<int, int> top = stk[stk.size() - 1];
                stk.pop_back();

                ans[top.second] = i - top.second;
            }

            stk.push_back({temperatures[i], i});
        }

        return ans;
    }
};
