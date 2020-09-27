class Solution:
    def climbStairs(self, n: int) -> int:
        if(n<=2):
            return n
        
        else:
            pre=1;current=2
            for i in range(3,n+1):
                pre,current=current,pre+current
                
            return current
