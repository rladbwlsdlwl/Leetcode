class Solution {
public:
    string reverseWords(string s) {
        vector<char>S;
        bool isBlank=true;
        
        // remove blank
        for(char c: s){
            if(c==' '){
                if(isBlank)
                    continue;
                
                isBlank=true;
            }
            else
                isBlank=false;    
            S.push_back(c);
        }
        
        if(S.back()==' ') // 맨 뒤 공백 처리
            S.pop_back();
        
        int n=S.size();
        for(int i=0; i<n/2; i++){
            char tmp=S[i];
            S[i]=S[n-i-1];
            S[n-i-1]=tmp;
        }
        
        int start=0, end=0;
        for(int i=0; i<=n; i++){
            if(i==n || S[i]==' '){
                end=i;
                
                for(int j=0; j<(end-start)/2; j++){
                    char tmp=S[start+j];
                    S[start+j]=S[end-j-1];
                    S[end-j-1]=tmp;
                }
                
                start=i+1;
            }
        }
        
        string ans="";
        for(int i=0; i<n; i++)
            ans+=S[i];
        
        return ans;   
    }
};
