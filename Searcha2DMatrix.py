class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        def search_row(arr,key,row):
            if(row==len(arr)):
                return False
            if(arr[row][0]<=key and arr[row][-1]>=key):
                return row+1 # if row is 0, Recognize False
            else:
                return search_row(arr,key,row+1)
        
        if(len(matrix)==0 or len(matrix[0])==0): return False # blank array
        
        
        check=search_row(matrix,target,0) 
        if(not check):
            return False
        
        return (True if(target in matrix[check-1]) else False) #approach index, sub 1
