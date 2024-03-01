class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1) return 0;
        
        int ans = 0;
        int sellpoint = 0;
        int buypoint = 10000;

        for (int i=0;i<prices.size();i++) {
            if (buypoint > prices[i]) {
                buypoint = prices[i];
                sellpoint = 0;
            }
            if (sellpoint < prices[i]) {
                sellpoint = prices[i];
                if (ans < sellpoint - buypoint) {
                    ans = sellpoint - buypoint;
                }
            }
        }

        return ans;
    }
};