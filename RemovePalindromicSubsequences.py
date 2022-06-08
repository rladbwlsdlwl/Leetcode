class Solution:
    def removePalindromeSub(self, s: str) -> int:
        ckeck_a,check_b=False,False
        isPalindrome=True
        
        for i in range(len(s)):
            if s[i]=='a':
                check_a=True
            if s[i]=='b':
                check_b=True
                
            if i<len(s)-i-1 and s[len(s)-i-1]!=s[i]:
                isPalindrome=False
                
        if isPalindrome:
            return 1
        
        return 2 if check_a and check_b else 1
        
