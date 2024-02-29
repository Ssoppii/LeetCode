class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for (int i=0;i<n.length();i++) {
            if (((int)(n[i]) - 48) > ans) ans = ((int)(n[i]) - 48);
        }
        return ans;
    }
};