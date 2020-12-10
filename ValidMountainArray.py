class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        def check_ascending(arr):
            if(len(arr)<2): return False
            for i in range(1,len(arr)):
                if(arr[i-1]>=arr[i]):
                    return False
            
            return True
        
        idx=arr.index(max(arr))
    
        return True if(check_ascending(arr[:idx+1]) and check_ascending(list(reversed(arr[idx:])))) else False
