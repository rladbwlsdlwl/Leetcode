class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans="";
        for(int i=0;i<n;i++){
            int val=k-(n-i-1)*26;
            
            if(val<=0)
                val=1;
            
            ans+=char(96+val);
            k-=val;
        }
    
        return ans;
    }
};
