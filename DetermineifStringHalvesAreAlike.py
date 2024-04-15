class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = [
            'a', 'e', 'i', 'o', 'u',
            'A', 'E', 'I', 'O', 'U'
        ]

        ans = 0
        for i, c in enumerate(s):
            if c in vowels:
                if len(s)//2 <= i:
                    ans -= 1
                else:
                    ans += 1

        return True if ans == 0 else False
