class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        result=0
        length=1
        while(length<=len(arr)):
            idx=0
            while(length+idx<=len(arr)):
                result+=sum(arr[idx:length+idx])
                idx+=1
                    
            length+=2
            
        return result
