class Solution {
public:
    char findTheDifference(string s, string t) {
        char table[26]={0, };
        
        for(auto c: t)
            table[c-'a']++;
        for(auto c: s)
            table[c-'a']--;
        
        int idx;
        for(int i=0;i<26;i++){
            if(table[i]){
                idx=i;
                break;
            }
        }
        
        return idx+'a';
    }
};
