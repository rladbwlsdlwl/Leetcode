class Solution:
    def maxProfitAssignment(self, difficulty: List[int], profit: List[int], worker: List[int]) -> int:
        ans = 0 
        works = [[profit[i], difficulty[i]] for i in range(len(difficulty))]
        works.sort(reverse = True)

        ans = 0
        for enable_person in worker:
            for money, hard in works: 
                if enable_person >= hard:
                    ans += money
                    break

        return ans
