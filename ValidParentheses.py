class Solution:
    def isValid(self, s: str) -> bool:
        stk = []
        for c in s:
            if c == '(' or c == '{' or c == '[':
                stk.append(c)
            else:
                if len(stk) == 0:
                    return False
                
                p = stk.pop()
                
                if (p == '(' and c != ')') or (p == '[' and c != ']') or (p == '{' and c != '}'):
                    return False

        if len(stk): return False
        
        return True 
