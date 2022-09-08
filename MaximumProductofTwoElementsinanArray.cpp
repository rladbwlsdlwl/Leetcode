class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=0, b=0;
        
        for(auto n: nums){
            if(a<=n){
                int tmp=a;
                a=n;
                b=tmp;
            }else if(b<n)
                b=n;
        }
        
        
        return (a-1)*(b-1);
    }
};
