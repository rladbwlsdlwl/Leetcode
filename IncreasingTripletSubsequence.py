class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        for i in range(2,len(nums)):
            cmp=nums[i]
            cnt=1
            for j in range(i-1,-1,-1):
                if(cmp>nums[j]):
                    if(cnt>1):
                        return True
                    else:
                        cnt+=1; cmp=nums[j]
                else:
                    if(cnt>1 and cmp<nums[j]<nums[i]):
                        cmp=nums[j]
                        
        
        return False
