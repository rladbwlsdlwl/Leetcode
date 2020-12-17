from collections import defaultdict
class Solution:
    def fourSumCount(self, A: List[int], B: List[int], C: List[int], D: List[int]) -> int:
        AB=defaultdict(int)
        CD=defaultdict(int)
        
        for i in range(len(A)):
            for j in range(len(A)):
                AB[A[i]+B[j]]+=1
                CD[C[i]+D[j]]+=1
                
        
        return sum(AB[ab]*CD[-1*ab] for ab in AB.keys())
        
        
        
        
