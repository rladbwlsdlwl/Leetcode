class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>cnt(26,0);
        for(int i=0;i<words2.size();i++){
            vector<int>tmp(26,0);
            
            for(int j=0;j<words2[i].size();j++)
                tmp[words2[i][j]-'a']++;
            for(int j=0;j<26;j++)
                cnt[j]=max(cnt[j], tmp[j]);
        }
        
        vector<string>ans;
        for(int i=0;i<words1.size();i++){
            vector<int>tmp=cnt;
            for(int j=0;j<words1[i].size();j++)
                tmp[words1[i][j]-'a']--;
            
            bool stopped=false;
            for(int i=0;i<26;i++){
                if(tmp[i]>0){
                    stopped=true;
                    break;
                }    
            }
            
            if(!stopped)
                ans.push_back(words1[i]);
        }
        
        return ans;
    }
};
