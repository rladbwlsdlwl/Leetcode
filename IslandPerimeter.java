class Solution {
    private int[] dy = {-1, 0, 1, 0};
    private int[] dx = {0, 1, 0, -1};

    public int islandPerimeter(int[][] grid) {
        int r = 0, c = 0;

        for(int i=0; i<grid.length; i++){
            for(int j=0; j<grid[i].length; j++){
                if(grid[i][j] == 1){
                    r = i; c = j;
                    break;
                }
            }
        }

        return bfs(r, c, grid);
    }

    class Pair{
        int r, c;

        Pair(int r, int c){
            this.r = r;
            this.c = c;
        }
    }

    private int bfs(int r, int c, int[][] grid){
        ArrayList<Pair> q = new ArrayList<>();
        boolean[][] visited = initBool(grid.length, grid[grid.length - 1].length);

        int ans = 0;
        
        q.add(new Pair(r, c));
        visited[r][c] = true;
        while(!q.isEmpty()){
            Pair pii = q.get(0);
            int y = pii.r;
            int x = pii.c;

            q.remove(0);
            
            int cnt = 0;
            for(int i=0; i<4; i++){
                int movey = dy[i] + y;
                int movex = dx[i] + x;

                if(movey < 0 || movey >= grid.length || movex < 0 || movex >= grid[grid.length-1].length) continue;
                if(grid[movey][movex] == 1){
                    cnt++;

                    if(!visited[movey][movex]){
                        q.add(new Pair(movey, movex));
                        visited[movey][movex] = true;
                    }
                    
                }
            }

            ans += 4-cnt;
        }

        return ans;
    }

    boolean[][] initBool(int r, int c){
        boolean[][] tmp = new boolean[r][c];

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++)
                tmp[i][j] = false;
        }

        return tmp;
    }
}
