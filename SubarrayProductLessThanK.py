class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        result=0;p=1;j=0
        for i in range(len(nums)):
            p*=nums[i]
            
            while(p>=k and i>=j):
                p/=nums[j]
                j+=1
                
            result+=(i+1)-j
                
                    
        return result
