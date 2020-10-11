class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        stack=['!']
        table={c:i for i,c in enumerate(s)}
        
        for i,value in enumerate(s):
            if(value in stack):
                continue
            
            while(stack[-1]>value and table[stack[-1]]>i):
                visit.remove(stack.pop())
                
            stack.append(value)
            visit.add(value)
            
        
        return "".join(stack[1:])
                
        
        
        
        
