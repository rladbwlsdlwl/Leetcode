class Solution:
    def wordPattern(self, pattern: str, str: str) -> bool:
        str=str.split()
        table={}
        if(len(pattern)!=len(str)):
            return False
                        
        for p in range(0,len(pattern)):
            if(pattern[p] not in table):
                for i in table.values():
                    if(str[p]==i):     
                        return False
                    
                table[pattern[p]]=str[p]
            else:
                if(table[pattern[p]]==str[p]):
                    continue
                else:
                    return False
        
        return True
                                                                                                                                                                                                                                                                    
