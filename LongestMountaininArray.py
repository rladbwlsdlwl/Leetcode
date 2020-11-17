class Solution:
    def longestMountain(self, A: List[int]) -> int:
        length=0
        state=0
        cnt=1
        for i in range(len(A)-1):
            if(state in [0,1] and A[i]<A[i+1]): 
                cnt+=1
                state=1
            elif(state==2 and A[i]<A[i+1]): #state of decrease to increase  
                state=1
                cnt=2
            elif(state in [1,2] and A[i]>A[i+1]): #state increase to decrese
                cnt+=1
                state=2
                length=max(length,cnt)
            else: #decrease one
                cnt=1
                state=0
                
        return length
                
