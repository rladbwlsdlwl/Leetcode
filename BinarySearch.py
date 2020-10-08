class Solution:
    def search(self, nums: List[int], target: int) -> int:
        def binary_search(arr,start,end,key):
            if(start<=end):
                mid=(start+end)//2
                if(arr[mid]==key):
                    return mid
                if(arr[mid]>key):
                    return binary_search(arr,start,mid-1,key)
                else:
                    return binary_search(arr,mid+1,end,key)
                
            return -1
        
        return binary_search(nums,0,len(nums)-1,target)
