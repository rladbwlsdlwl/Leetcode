class KthLargest:
    def __init__(self, k: int, nums: List[int]):
        self.sortedNums = sorted(nums, reverse=True)
        self.findIdx = k    

    def add(self, val: int) -> int:
        self.sortedNums.append(val)
        self.sortedNums.sort(reverse=True)

        return self.sortedNums[self.findIdx-1]


# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)
