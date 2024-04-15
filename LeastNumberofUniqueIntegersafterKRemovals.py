class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        table = defaultdict(int) # count
        hq = [] # min heap

        for val in arr:
            table[val] += 1

        tmp = sorted(arr, key = lambda x: (table[x], x))
        return len(set(tmp[k:]))
        # for key in table:
        #     heapq.heappush(hq, (table[key], key))

        # ans = 0
        # while hq:
        #     cnt, idx = heapq.heappop(hq)

        #     if k > 0:
        #         k -= cnt
        #         if k < 0:
        #             ans += 1
        #     else:
        #         ans += 1

        # return ans
