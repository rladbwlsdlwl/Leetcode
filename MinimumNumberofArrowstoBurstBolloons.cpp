class Solution {
public:
    const long long INF = 9999'999'999;

    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 0;

        sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int>& b){
            if(a[0] == b[0])
                return a[1] < b[1];
            return a[0] < b[0];
        });

        long long a = -INF, b = INF;
        for(int i=0; i<points.size(); i++){
            a = max(a, (long long)points[i][0]);
            b = min(b, (long long)points[i][1]);

            if(a>b){
                ans++;
                a = (long long)points[i][0];
                b = (long long)points[i][1];
            }
        }


        return ans+1;
    }
};
