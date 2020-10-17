class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map <string,int> table;
        vector <string> result;

        if(s.length()<=10)
            return result;
        
        for(int i=0; i<s.length()-10+1; i++)
            if(++table[s.substr(i,10)]==2)
                result.push_back(s.substr(i,10));
    
        return result;
    }
};

