class Solution {
public:
    string smallestSubsequence(string s) {
        vector<bool> check(26,false);
        vector<size_t> count(26,0);
        
        for(int i=0; i<s.length(); i++)
            count[s[i]-'a']++; // count letter
        
        string result;
        for(int i=0; i<s.length(); i++){
            count[s[i]-'a']--;
        
            if(check[s[i]-'a']==0){
                while(result.length()>0 && result[result.length()-1]>s[i] && count[result[result.length()-1]-'a']>0){
                    check[result[result.length()-1]-'a']=false;
                    result.pop_back();
                }
                
                check[s[i]-'a']=true;
                result.push_back(s[i]);
            }
        }
        
        return result;
    }
};
