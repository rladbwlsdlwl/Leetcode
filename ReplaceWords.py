class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        table = {}

        for word in dictionary:
            if word not in table:
                table[word] = True

        ans = ""
        for words in sentence.split():
            for i in range(len(words)):
                if words[:i] in table:
                    ans += ' ' + words[:i]
                    break
            else:
                ans += ' ' + words
            

        return ans.strip()
