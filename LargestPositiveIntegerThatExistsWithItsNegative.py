class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        table = [False for _ in range(2001)]

        ans = -1
        for n in nums:
            if table[-n + 1000] :
                ans = max(ans, abs(n))

            table[n+1000] = True

        return ans
