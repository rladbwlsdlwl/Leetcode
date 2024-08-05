class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        for i, s in enumerate(arr):
            if arr.count(s) == 1:
                k -= 1
            if k == 0:
                return s
        return ""
