class Solution:
    def bitwiseComplement(self, N: int) -> int:
        biN=format(N,"b")
        complement='1'*len(biN)
        return int(biN,2)^int(complement,2)
