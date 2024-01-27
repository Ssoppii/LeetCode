class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        int tmp = 0;
        for (int i=0;i<arr1.size();i++) {
            tmp = 0;
            for (int j=0;j<arr2.size();j++) {
                if (abs(arr1[i]-arr2[j]) > d) tmp += 1;
            }
            if (tmp == arr2.size()) ans += 1;
        }
        return ans;
    }    
};