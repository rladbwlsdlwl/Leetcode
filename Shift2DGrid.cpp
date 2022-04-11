class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r=grid.size(),c=grid[0].size();
        k=k%(r*c);
        
        for(int p=0;p<k;p++){
            int tmp=grid[r-1][c-1];
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++)
                    swap(tmp,grid[i][j]);
            }
        }
        
        return grid;
    }
};
