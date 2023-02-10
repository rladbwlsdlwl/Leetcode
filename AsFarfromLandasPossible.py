class Solution:
   def maxDistance(self, grid: List[List[int]]) -> int:
        # use deque - bfs
        N = len(grid)
        dy = [-1, 0, 1, 0]
        dx = [0, 1, 0, -1]

        visited = [[False for _ in range(N)] for _ in range(N)]
   
        ans = -1
        q = deque()

        for i in range(N):
            for j in range(N):
                if grid[i][j] == 1:
                    q.append((i, j, 0))

                    
        while q:
            y, x, distance = q.popleft()

            for i in range(4):
                movey, movex = y+dy[i], x+dx[i]
                if 0<=movey<N and 0<=movex<N and grid[movey][movex]==0 and not visited[movey][movex]:
                    visited[movey][movex] = True
                    q.append((movey, movex, distance+1))

                    ans = max(ans, distance+1)


        

        return ans
                    
