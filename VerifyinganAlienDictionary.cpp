int table[26] = {0, };

bool isSmaller(string a, string b){ // a <= b, true else false
    int cmp;
    for(int i=0; i<a.size() && i<b.size(); i++){
        cmp = table[a[i]-'a']-table[b[i]-'a'];
        if(cmp < 0)
            return true;
        else if(cmp > 0)
            return false;
    }

    return (a.size()<=b.size() ? true : false); 
}

bool compare(string &a, string &b){
    return isSmaller(a, b); 
}

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0; i<26; i++)
            table[order[i]-'a'] = i;
        

        vector<string> wordCmp;
        for(auto s: words)
            wordCmp.push_back(s);

        sort(wordCmp.begin(), wordCmp.end(), compare);

        for(int i=0; i<words.size(); i++){
            if(words[i].compare(wordCmp[i]))
                return false;
        }

        return true;
    }
};
