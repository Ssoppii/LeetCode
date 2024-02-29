class Solution {
public:
    string makeSmallestPalindrome(string s) {
        for (int i=0;i<s.size()/2;i++) {
            if (s[i] != s[s.size()-i-1]) {
                if (s.substr(i, 1) < s.substr(s.size()-i-1, 1)) s = s.substr(0, s.size()-i-1) + s.substr(i, 1) + s.substr(s.size()-i, s.size());
                else s = s.substr(0, i) + s.substr(s.size()-i-1, 1) + s.substr(i+1, s.size());
            }
        }
        return s;
    }
};