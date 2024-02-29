class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        answer = [first] + [0] * len(encoded)

        for i in range(len(encoded)):
            answer[i+1] = answer[i] ^ encoded[i]
            
        return answer

        