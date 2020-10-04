class Solution:
    def removeCoveredIntervals(self, intervals: List[List[int]]) -> int:
        remain=0
        idx=0
        
        intervals.sort(key=lambda x: x[0], reverse=True) #sorting by row
    
        while(idx<len(intervals)):
            check=True
            for _,j in intervals[idx+1:]:
                if(intervals[idx][1]<=j):
                    check=False
                    break
                
            if(check):
                remain+=1
            
            idx+=1
            
        return remain
