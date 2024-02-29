#include <algorithm>
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result; 
        sort(arr.begin(), arr.end());
        int diff = 100000;
        for (int i=0;i<arr.size()-1;i++) {
            if (arr[i+1] - arr[i] < diff) diff = arr[i+1] - arr[i];
        }

        for (int i=0;i<arr.size()-1;i++) {
            if (arr[i+1] - arr[i] == diff) result.push_back({arr[i], arr[i+1]});
        }
        return result;
    }
};