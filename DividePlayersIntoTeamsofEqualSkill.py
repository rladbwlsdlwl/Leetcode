class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        skill.sort()

        N = len(skill)
        ans = 0
        for i in range(N//2):
            if skill[0]+skill[N-1] != skill[i]+skill[N-i-1]:
                return -1
            ans += skill[i] * skill[N-i-1]

        return ans
