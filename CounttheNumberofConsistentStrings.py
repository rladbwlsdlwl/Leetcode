class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        cnt=0
        for i in range(len(words)):
            stopped=False
            for c in words[i]:
                if(c not in allowed):
                    stopped=True
                    break
            
            if(not stopped): cnt+=1
                
        
        return cnt
