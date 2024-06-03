class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        tIdx = 0
        for i in range(len(s)):
            if tIdx < len(t) and s[i] == t[tIdx]:
                tIdx += 1

        return len(t) - tIdx 
