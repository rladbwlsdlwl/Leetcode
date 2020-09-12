class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        dp=[0]+[amount+1]*amount #coin으로 못만드는 값은 amount+1로 지정됨                    
                                
        for value in range(1,amount+1):
            for coin in coins:
                if(value>=coin):
                    dp[value]=min(dp[value],dp[value-coin]+1)
   
        return (-1 if(dp[amount]>amount) else dp[amount])
   
                                                                                                                                    
                                                                                                                                
                                                                                                                                    
                                                                                                                                    
