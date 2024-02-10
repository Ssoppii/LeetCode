class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        ans = len(nums)
        for i in range(len(nums)):
            if i not in nums:
                ans = i
                break
        
        return ans