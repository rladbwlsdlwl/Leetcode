class Solution:
    def spiralMatrixIII(self, R: int, C: int, r0: int, c0: int) -> List[List[int]]:
        current_row=r0
        current_col=c0
        p=1;n=1
        list=[[r0,c0]]
        
        while(len(list)<R*C):
            for i in range(n):
                current_col+=p
                if(current_col<C and current_col>=0 and current_row<R and current_row>=0):
                    list.append([current_row,current_col])
            for i in range(n):
                current_row+=p
                if(current_col<C and current_col>=0 and current_row<R and current_row>=0):
                    list.append([current_row,current_col])
            
            p*=-1
            n+=1
                
        return list
