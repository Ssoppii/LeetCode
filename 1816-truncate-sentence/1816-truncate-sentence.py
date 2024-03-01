class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        dictionary = s.split()
        answer = dictionary[:k]

        return " ".join(answer)