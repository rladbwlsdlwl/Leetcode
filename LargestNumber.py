class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        def max_str_cmp(arr):
            mx=0
            for i in range(len(arr)):
                if((str(arr[mx]))[0] < (str(arr[i]))[0]):
                    mx=i
                else:
                    if((str(arr[mx]))[0] == (str(arr[i]))[0]):
                        mx=(i if(int(str(arr[mx])+str(arr[i])) < int(str(arr[i])+str(arr[mx]))) else mx)
                        
            return mx
                        
                    
        s=""
        if(len(nums)==nums.count(0)):
            return str(0)
        
        for i in range(len(nums)):
            mx_idx=max_str_cmp(nums)
            s+=str(nums[mx_idx])
            del nums[mx_idx]
            
            
        return s
        
