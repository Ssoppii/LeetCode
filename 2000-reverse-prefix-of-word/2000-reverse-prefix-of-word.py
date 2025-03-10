class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        idx = -1
        for i in range(len(word)):
            if word[i] == ch:
                idx = i
                break
        if idx > 0:
            return "".join(reversed(word[:i+1])) + word[i+1:]
        else:
            return word