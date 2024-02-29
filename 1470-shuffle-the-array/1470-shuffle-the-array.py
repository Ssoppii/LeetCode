class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        answer = [0] * (n*2)
        for i in range(0, n):
            answer[i*2] = nums[i]
            answer[(i+1)*2-1] = nums[i+n]
        return answer