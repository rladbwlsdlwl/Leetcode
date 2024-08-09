class Solution:
    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
        def isZeroToNine(m, n, findNum):
            for i in range(m, m+3):
                for j in range(n, n+3):
                    if grid[i][j] == findNum:
                        return True if findNum == 9 else isZeroToNine(m, n, findNum + 1)
            
            return False
        
        def isEqualDiagonalSum(m, n):
            return grid[m][n]+grid[m+1][n+1]+grid[m+2][n+2] == grid[m][n+2]+grid[m+1][n+1]+grid[m+2][n] == sum(grid[m][n:n+3]) == sum(grid[m+1][n:n+3]) == sum(grid[m+2][n:n+3]) == grid[m][n]+grid[m+1][n]+grid[m+2][n] == grid[m][n+1]+grid[m+1][n+1]+grid[m+2][n+1] == grid[m][n+2]+grid[m+1][n+2]+grid[m+2][n+2]
        
        ans = 0
        for i in range(len(grid)-2):
            for j in range(len(grid[0])-2):
                if isZeroToNine(i, j, 1) and isEqualDiagonalSum(i, j):
                    ans += 1

        return ans
