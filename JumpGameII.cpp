class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)
            return 0;

        int p = 0;
        int cnt = 1;
        while(p+nums[p] < nums.size()-1){
            int mx = p;
            int add = 1;
            for(int i=1; i<=nums[p] && mx+add < nums.size(); i++){
                if(nums[mx]-add <= nums[p+i]){
                    mx = p+i;
                    add = 0;
                }
                add++;
            }

            p = mx;
            cnt++;
        }


        return cnt;
    }
};
