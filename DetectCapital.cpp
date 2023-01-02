class Solution {
public:
    bool isLower(string word, int start, int end){
        for(int i=start; i<end; i++){
            if(word[i]-'a' < 0)
                return false;
        }

        return true;
    }

    bool isUpper(string word, int start, int end){
        for(int i=start; i<end; i++){
            if(word[i]-'a'>=0)
                return false;
        }

        return true;
    }

    bool detectCapitalUse(string word) {
        if(word[0] - 'Z' > 0) // first charactor is lower case
            return isLower(word, 1, word.size());
        else
            return isLower(word, 1, word.size()) || isUpper(word, 1, word.size());
    }
};
