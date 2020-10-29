class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        i=0
        result=[]
        
        while(i<len(nums)):
            start=str(nums[i])
            end=""
            while(i+1<len(nums) and nums[i]+1==nums[i+1]):
                end=str(nums[i+1])
                i+=1
                
            if(len(end)): start+="->"+str(end)
                
            result.append(start)
            i+=1
                
        return result
            
            
                
            
            
            
