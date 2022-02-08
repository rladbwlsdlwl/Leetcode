class Solution {
public:
    int addDigits(int num) {
        while(num/10){
            int n=0;
            for(int tmp=num;tmp;tmp/=10)
                n+=tmp%10;
            num=n;
        }
        
        return num;
    }
};
