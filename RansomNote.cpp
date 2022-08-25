class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int mCnt[26]={0,};
        
        for(auto c: magazine)
            mCnt[c-'a']++;
        for(auto c: ransomNote){
            if(!(mCnt[c-'a']--))
                return false;   
        }
        
        return true;
    }
};
