Class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int max_cnt=0;
        bool zero=true;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                if(zero){ // before zero, now zero
                    if(i+1==flowerbed.size() || flowerbed[i+1]==0){ // after zero
                        max_cnt++;
                        zero=false;
                        continue;
                    }
                    
                }zero=true;
            }else
                zero=false;
        }
        
        return max_cnt>=n;
    }
};
