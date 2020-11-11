class Solution:
    def validSquare(self, p1: List[int], p2: List[int], p3: List[int], p4: List[int]) -> bool:
        check=[p1,p2,p3,p4]
        for p in check:
            if check.count(p)>1 : return False #figure same position
        
        return True if(len(set([math.sqrt(math.pow(p1[0]-p2[0],2)+math.pow(p1[1]-p2[1],2)),math.sqrt(math.pow(p1[0]-p3[0],2)+math.pow(p1[1]-p3[1],2)),math.sqrt(math.pow(p1[0]-p4[0],2)+math.pow(p1[1]-p4[1],2)),math.sqrt(math.pow(p2[0]-p3[0],2)+math.pow(p2[1]-p3[1],2)),math.sqrt(math.pow(p2[0]-p4[0],2)+math.pow(p2[1]-p4[1],2)),math.sqrt(math.pow(p3[0]-p4[0],2)+math.pow(p3[1]-p4[1],2))]))==2) else False
        
