class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        ans = {}
        result = 0
        for s in stones:
            if s not in ans.keys():
                ans[s] = 1
            else:
                ans[s] += 1
        for j in jewels:
            if j in ans.keys():
                result += ans[j]
        return result