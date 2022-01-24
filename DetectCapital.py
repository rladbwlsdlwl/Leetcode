class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if len(word)==1 or word.isupper() or word[0].isupper() and word[1:].islower() or word.islower():
            return True # ABC Abc abc
        else:
            return False
