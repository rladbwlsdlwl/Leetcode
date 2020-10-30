class Solution:
    def maxDistToClosest(self, seats: List[int]) -> int:
        stack=[seats[0]]
        distance=0
        
        for value in seats[1:]:
            if(value==1):
                cnt=0
                if(stack[0]==0): peek=False
                else: peek=True #find middle distance between 1 and 1 
                    
                while(len(stack)): #stack.empty()==0, loop
                        stack.pop()
                        cnt+=1
                if(peek): distance=cnt//2 if(distance<cnt//2) else distance
                else: distance=cnt if(distance<cnt) else distance
                
            stack.append(value)
            
        if(len(stack)==1): return distance #case: seats[-1]=1
        
        #case: seat[-1]=0
        stack.pop() #pop peek
        cnt=0
        while(len(stack)):
            cnt+=1
            stack.pop()
        return distance if(distance>cnt) else cnt
        
