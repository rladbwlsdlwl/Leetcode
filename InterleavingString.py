class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        if len(s3)!=len(s1)+len(s2):
            return False
        
        dp=[[0 for _ in range(len(s1)+1)] for _ in range(len(s2)+1)]
        
        # initialize
        for i in range(1, len(s1)+1):
            if s1[dp[0][i-1]]==s3[dp[0][i-1]]:
                dp[0][i]=dp[0][i-1]+1
            else:
                dp[0][i]=dp[0][i-1]
        for i in range(1, len(s2)+1):
            if s2[dp[i-1][0]]==s3[dp[i-1][0]]:
                dp[i][0]=dp[i-1][0]+1
            else:
                dp[i][0]=dp[i-1][0]
            
        
        
        for i in range(1, len(s2)+1):
            for j in range(1, len(s1)+1):
                dp[i][j]=max(dp[i-1][j], dp[i][j-1])
                if s2[i-1]==s3[dp[i-1][j]]:
                    dp[i][j]=max(dp[i][j], dp[i-1][j]+1)
                if s1[j-1]==s3[dp[i][j-1]]:
                    dp[i][j]=max(dp[i][j], dp[i][j-1]+1)
                
                
        return True if dp[len(s2)][len(s1)]==len(s3) else False
        
        
