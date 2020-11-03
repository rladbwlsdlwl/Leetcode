class Solution:
    def maxPower(self, s: str) -> int:
        table=[]
        point=s[0]
        cnt=0
        
	for p in s:
            if(point==p):
                cnt+=1
            else:
                point=p
                table.append(cnt)
                cnt=1
        
        if(cnt): table.append(cnt)
        return max(table)
        
