class Solution:
    def minCut(self, s: str) -> int:
        n = len(s)
        dp = [i-1 for i in range(n+1)]
        for r in range(n+1):
            for l in range(r):
                if s[l:r] == s[l:r][::-1]:
                    dp[r]=min(dp[r],dp[l]+1)
        return dp[n]  