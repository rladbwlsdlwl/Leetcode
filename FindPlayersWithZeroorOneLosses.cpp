class Solution {
public:
    const int MAX = 100000 + 1; 
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>cnt(MAX, -1);

        for(int i=0; i<matches.size(); i++){
            cnt[matches[i][1]] = cnt[matches[i][1]] == -1? 1: cnt[matches[i][1]]+1;
            cnt[matches[i][0]] = cnt[matches[i][0]] == -1? 0: cnt[matches[i][0]]; // 경기에서 이겼다가 졌을경우 || 졌다가 이겼을경우
        }

        vector<vector<int>>ans(2, vector<int>());
        for(int i=0; i<MAX; i++){
            if(cnt[i] == 1){
                ans[1].push_back(i);
            }else if(cnt[i] ==  0){
                ans[0].push_back(i);
            }
        }


        return ans;
    }
};
