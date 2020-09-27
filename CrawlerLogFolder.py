class Solution:
    def minOperations(self, logs: List[str]) -> int:
        move=0
        for i in range(len(logs)):
            check=logs[i].count('.')
            if(check==2):
                if(move==0):
                    move=0
                else:
                    move-=1
            elif(check==1):
                move=move
            else:
                move+=1
                
        return move
