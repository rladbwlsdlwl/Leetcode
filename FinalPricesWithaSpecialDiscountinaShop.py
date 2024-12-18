class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        ans = []

        n = len(prices)
        for i, val in enumerate(prices):
            discount = 0
            
            for j in range(i+1, n):
                if val >= prices[j]:
                    discount = prices[j]
                    break

            ans.append(val - discount)

        return ans
