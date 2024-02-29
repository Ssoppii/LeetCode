#include <queue>

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans;
        priority_queue<int> pq;
        int temp;

        for (auto num : nums) {
            pq.push(num);
        }

        for (int i=0; i<k; i++) {
            temp = pq.top();
            pq.pop();
            ans = temp;
        }
        return ans;
    }
};