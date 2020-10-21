class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        stack=[]
        
        for value in asteroids:
            if(value>0):
                stack.append(value)
            else:
                compare=False
                while(len(stack) and stack[-1]>0): #stack.empty()
                    if(stack[-1]>value*-1): #stack.top()
                        compare=True
                        break
                    elif(stack[-1]<value*-1):
                        stack.pop() 
                    else:
                        compare=True #not pushed value
                        stack.pop() 
                        break
                
                if(not compare): stack.append(value)
                    
        return stack
