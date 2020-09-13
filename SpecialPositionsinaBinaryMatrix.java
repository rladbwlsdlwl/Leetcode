class Solution {
    public int numSpecial(int[][] mat) {
        int result=0;
        int row=mat.length;
        int col=mat[0].length;
        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                boolean check=true;
                if(mat[r][c]==1){
                    for(int p=0; p<row; p++){
                        if(mat[p][c]==1 && p!=r)
                            check=false;
                    }
                    if(check){
                        for(int p=0; p<col; p++){
                            if(mat[r][p]==1 && p!=c)
                                check=false;
                        }
                    }
                
                    if(check)
                        result+=1;
                }
            }
        }
    
        return result;
    }
}
