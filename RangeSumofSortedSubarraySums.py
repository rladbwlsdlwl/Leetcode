class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        ans = []

        for i in range(n):
            tmp = 0
            for j in range(i, n):
                tmp += nums[j] % (10**9+7)
                ans.append(tmp)

        ans.sort()

        return sum(ans[left - 1: right]) % (10**9+7)
