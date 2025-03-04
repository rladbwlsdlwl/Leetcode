class Solution:
    def checkPowersOfThree(self, n: int) -> bool:
        table = set([0])

        for i in range(16):
            for num in copy.deepcopy(table):
                com = num + 3**i
                if com == n: return True
                if com > 10**7: break
                table.add(com)


        return False
