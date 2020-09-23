class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        m=max([i for _,_,i in trips])
        amount=[0]*(m+1)
        
        for i,j,k in trips:
            amount[j]+=i
            amount[k]-=i
            
        return max(accumulate(amount))<=capacity
