class Solution:
    def minDominoRotations(self, A: List[int], B: List[int]) -> int:
        Alist={}
        Blist={}
        
        for i in range(len(A)):
            a=A[i]
            b=B[i]
            stop=False        
            cnt=0
            
            for j in range(len(A)):
                if(a in Alist):
                    stop=True
                    break
                if(i==j):
                    continue
                if(A[j]!=a):
                    if(B[j]==a):
                        cnt+=1
                    else:
                        stop=True
                        break
            if(not stop):
                Alist[a]=cnt
            
            stop=False        
            cnt=0
            for j in range(len(A)):
                if(b in Blist):
                    stop=True
                    break
                if(i==j):
                    continue
                if(B[j]!=b):
                    if(A[j]==b):
                        cnt+=1
                    else:
                        stop=True
                        break
            if(not stop):
                Blist[b]=cnt
                 
        if(len(Alist)==0 and len(Blist)==0): return -1
        elif(len(Alist)==0): return min(Blist.values())
        elif(len(Blist)==0): return min(Alist.values())
        
        return min(Alist.values()) if(min(Alist.values())<min(Blist.values())) else min(Blist.values())
    
        
                    
