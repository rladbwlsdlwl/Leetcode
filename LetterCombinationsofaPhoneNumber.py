class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        def dfs(s):
            if len(s)==len(digits):
                ans.append(s)
                return 
            
            for c in table[int(digits[len(s)])]:
                dfs(s+c)
        
        table={2:"abc", 3:"def", 4:"ghi", 5:"jkl", 6:"mno", 7:"pqrs", 
              8:"tuv", 9:"wxyz"};
        
        ans=[]
        dfs("")
        
        return [] if len(ans)==1 else ans
