class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.split()
        return (0 if(not len(s)) else len(s[-1]))
