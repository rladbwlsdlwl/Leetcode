class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        vector<vector<int>>tmp; // 병합이 필요한 배열 임시 저장

        int start, end; // index

        // newInterval의 시작구간에 속하면 멈춤
        for(start = 0; start<intervals.size() && intervals[start][1] < newInterval[0]; start++)
            ans.push_back(intervals[start]);

        // newInterval의 시작구간서부터 끝구간까지 속하는 배열 찾음
        for(end = start; end<intervals.size() && intervals[end][0] <= newInterval[1]; end++)
            tmp.push_back(intervals[end]);
        
        
        if(tmp.size() == 0) // 구간에 속하지 않는 배열 -> 병합이 필요없음
            ans.push_back(newInterval);
        else{ // merge
            int p = min(tmp.front()[0], newInterval[0]);
            int q = max(tmp.back()[1], newInterval[1]);

            ans.push_back({p, q});
        }

        for(int i = end; i<intervals.size(); i++)
            ans.push_back(intervals[i]);


        return ans;
    }
};
