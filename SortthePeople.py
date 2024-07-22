class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        # for i in range(len(names)):
        #     for j in range(i+1, len(names)):
        #         if heights[i] < heights[j]:
        #             heights[i], heights[j] = heights[j], heights[i]
        #             names[i], names[j] = names[j], names[i]

        # return names

        return [name for name, height in sorted(zip(names, heights), key = lambda x: x[1], reverse = True)]
