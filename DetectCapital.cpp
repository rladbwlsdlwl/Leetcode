class Solution {
public:
    bool detectCapitalUse(string word) {
	bool stopped=false;
	if(word.size()>1){
	    bool upper=('A'<=word[0] && word[0]<='Z' && 'A'<=word[1] && word[1]<='Z' ? true : false);
	    for(int i=1; i<word.size(); i++){
		if(upper){
		    if(!('A'<=word[i] && word[i]<='Z')){
			stopped=true;
			break;
		    }
		}else{
		    if(!('a'<=word[i] && word[i]<='z')){
			stopped=true;
			break;
		    }
		}
	    }
	}
	
	
	return !stopped;
    }
};

