class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) == 1:
            return 0
        
        ans = []
        sellpoint = 0
        buypoint = 10 ** 4
        for i in range(len(prices)):
            if buypoint > prices[i]:
                buypoint = prices[i]
                sellpoint = 0
            if sellpoint < prices[i]:
                sellpoint = prices[i]
                ans.append(sellpoint - buypoint)

        return max(ans)
            