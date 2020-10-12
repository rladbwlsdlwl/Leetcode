class Solution:
    def buddyStrings(self, A: str, B: str) -> bool:
        if(len(A)!=len(B)): return False
        if(A==B and len(set(A))<len(B)): return True # True: aa aa False: ab ab
        
        Alist=[]
        Blist=[]
        for i in range(len(A)):
            if(A[i]!=B[i]):
                Alist.append(A[i])
                Blist.append(B[i])
                
        return (len(Alist)==len(Blist)==2 and Alist[::-1]==Blist) 

