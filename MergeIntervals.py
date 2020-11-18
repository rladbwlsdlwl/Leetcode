class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda x:x[0])
        result=[intervals[0]]
        p=0
        
        for i in range(1,len(intervals)):
            if(result[p][0]>=intervals[i][0]):
                if(result[p][1]<=intervals[i][1]):
                    result[p][0],result[p][1]=intervals[i][0],intervals[i][1]
                else:
                    result[p][0]=intervals[i][0]
            elif(result[p][1]>=intervals[i][0]):
                if(result[p][1]<intervals[i][1]):
                    result[p][1]=intervals[i][1]
            else:
                result.append(intervals[i])
                p+=1
                
        return result
