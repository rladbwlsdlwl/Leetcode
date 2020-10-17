class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        table={}
        for i in range(len(s)-10+1): # push all substring
            value=s[i:i+10]
            if(value in table):
                table[value]+=1
            else:
                table[value]=1
                
        return [p for p in table.keys() if(table[p]>1)]
