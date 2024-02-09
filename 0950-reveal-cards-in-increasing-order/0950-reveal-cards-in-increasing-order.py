class Solution:
    def deckRevealedIncreasing(self, deck: List[int]) -> List[int]:
        deck = sorted(deck)[::-1]
        answer = []

        for num in deck:
            if len(answer) == 0:
                answer.insert(0, num)
            else:
                answer.insert(0, answer[-1])
                answer = answer[:-1]
                answer.insert(0, num)
        
        return answer