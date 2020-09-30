class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        num=1
        while(True):
            if(num not in nums):
                break
            else:
                num+=1
            
        return num
