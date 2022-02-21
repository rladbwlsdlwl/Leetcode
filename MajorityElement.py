class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        table=defaultdict(int)
        
        for n in nums:
            table[n]+=1
            
        for key in table:
            if table[key]>=ceil(len(nums)/2):
                return key 
