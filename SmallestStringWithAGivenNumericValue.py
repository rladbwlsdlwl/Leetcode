class Solution:
    def getSmallestString(self, n: int, k: int) -> str:
        result=[]
        
        for i in range(n):
            if(k>(n-i-1)*26):
                val=k%26-1 if(k%26) else 25 
                result.append(chr(ord('a')+val))
                break
            else:
                result.append('a')
                k-=1
        
        for i in range(len(result),n):
            result.append('z')
            
        return ''.join(result)
        
        
