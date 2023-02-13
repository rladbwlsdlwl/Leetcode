class Solution:
    def countOdds(self, low: int, high: int) -> int:
        def convert(n):
            return n+1 if n%2 else n

        return convert(high)//2 - convert(low-1)//2
