class Solution:
    def averageWaitingTime(self, customers: List[List[int]]) -> float:
        time, ans = 0, 0
        for arrive, wait in customers:
            if time < arrive:
                time = arrive
            
            ans += time - arrive + wait
            time += wait

        return ans / len(customers)
