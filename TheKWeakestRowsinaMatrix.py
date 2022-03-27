class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        heap=[]
        
        for i in range(len(mat)):
            heapq.heappush(heap,(sum(mat[i]), i))
            
        return [heapq.heappop(heap)[1] for i in range(k)]
