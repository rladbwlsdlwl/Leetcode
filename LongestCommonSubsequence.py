class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        s1, s2 = len(text1), len(text2)
        dp = [[0 for _ in range(s1+1)] for j in range(s2+1)]

        for i in range(1, s2+1):
            for j in range(1, s1+1):
                dp[i][j] = max(dp[i-1][j], dp[i][j-1], dp[i-1][j-1] + (1 if text2[i-1] == text1[j-1] else 0))

        return dp[s2][s1]

