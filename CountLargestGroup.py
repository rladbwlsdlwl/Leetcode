class Solution:
    def countLargestGroup(self, n: int) -> int:
        table={}
        
        for p in range(1,n+1):
            data=sum(map(int,list(str(p))))
            
            if(data not in table):
                table[data]=1
            else:
                table[data]+=1
                
        mx=max(table.values())
        return sum(1 for i in table.values() if(i==mx))
