class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if not len(s):
            return True
        elif not len(t):
            return False
        elif s[0]==t[0]:
            return self.isSubsequence(s[1:], t[1:])
        else:
            return self.isSubsequence(s, t[1:])
