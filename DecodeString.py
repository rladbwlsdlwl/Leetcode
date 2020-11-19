class Solution:
    def decodeString(self, s: str) -> str:
        result=[]
        
        for c in s:
            if(c==']'):
                temp=""
                p=result.pop()
                while(p!='['):
                    temp+=p
                    p=result.pop()
                
                n=""
                p=result.pop()
                while(len(result)>0 and '0'<=p and p<='9'):
                    n+=p
                    p=result.pop()
                if(p>='0' and p<='9'):
                    n+=p
                else:
                    result.append(p)
                
                for _ in range(int(n[::-1])):
                    for i in range(len(temp)-1,-1,-1):
                        result.append(temp[i])
            else:
                result.append(c)
                
        return ''.join(result)
