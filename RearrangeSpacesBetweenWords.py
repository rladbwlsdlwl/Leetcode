class Solution:
    def reorderSpaces(self, text: str) -> str:
        
        cnt=text.count(' ')
        result=""
        strlen=len(text.split())
       
       if(strlen==1):
            text=text.strip()
            return text+' '*cnt
       
       blank=cnt//(strlen-1)
       last=cnt%(strlen-1)
       check=False
        
        for i in range(len(text)):
            if(text[i]!=' '):
                result+=text[i]
                check=True
            else:
                if(check):
                    result+=' '*blank
                    check=False
        
        result=result.rstrip()
        return result+' '*last
