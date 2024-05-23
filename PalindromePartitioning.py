class Solution:
    def partition(self, s: str) -> List[List[str]]:
        ans = []
        def isPalindrome(s):
            for i in range(len(s)//2):
                if s[i] != s[len(s)-i-1]:
                    return False
            return True

        def dfs(p, order):# p = s's index, order = avaliable palindrome partition 
            if p == len(s):
                if "".join(order) == s:
                    ans.append(order.copy())
                return 
            
            current_str = ""
            for i in range(p, len(s)):
                current_str += s[i]
                if isPalindrome(current_str):
                    order.append(current_str)
                    dfs(i+1, order)
                    order.pop()
                
        dfs(0, []) 
        
        return ans
