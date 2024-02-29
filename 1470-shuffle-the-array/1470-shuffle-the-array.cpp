class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answer(2*n);
        for (int i=0;i<n;i++) {
            answer[i*2] = nums[i];
            answer[(i+1)*2-1] = nums[i+n];
        }
        return answer;
    }
};