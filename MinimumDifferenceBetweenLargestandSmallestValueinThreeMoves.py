class Solution:
    def minDifference(self, nums: List[int]) -> int:
        if len(nums) < 5:
            return 0
        
        ans = 9999999999
        nums.sort()
        for i in range(4):
            ans = min(ans, nums[len(nums)-1-i] - nums[3-i])
        
        return ans        
