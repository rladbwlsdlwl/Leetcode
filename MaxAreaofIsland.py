class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        def dfs(y,x):
            cnt=1
            if not (0<=y<len(grid) and 0<=x<len(grid[0])) or grid[y][x]!=1:
                return 0
            
            grid[y][x]=2
            for moveY, moveX in [(-1,0),(0,1),(1,0),(0,-1)]:
                cnt+=dfs(y+moveY, x+moveX)
                
            return cnt
            
            
        ans=0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                ans=max(ans, dfs(i,j))
                
        return ans
