class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int ascend=-1; //init -1, ascend 1 decrease 0
        bool stopped=false;
        
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]<arr[i]){
                if(ascend==0){
                    stopped=true;
                    break;
                }
                ascend=1;
            }else if(arr[i-1]>arr[i]){
                if(ascend==-1){
                    stopped=true;
                    break;
                }
                ascend=0;
            }else{ // arr[i-1]=arr[i]
                stopped=true;
                break;
            }
        }
        
        return !stopped && ascend==0;
    }
};
