class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        ans = 0
        
        prefix = [0 for _ in range(k)]
        pre = 0

        prefix[0] = 1
        for n in nums:
            pre = (pre + n)%k

            ans += prefix[pre]
            prefix[pre] += 1

        return ans
