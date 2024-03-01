int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 1) return 0;
        
    int ans = 0;
    int sellpoint = 0;
    int buypoint = 10000;

    for (int i=0;i<pricesSize;i++) {
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