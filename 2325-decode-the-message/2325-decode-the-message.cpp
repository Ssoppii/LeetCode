class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, int> dictionary;
        int t = 0;
        for (auto i:key) {
            if (dictionary.count(i) == 0 && i != ' ') {
                dictionary[i] = int(i) - (97 + t);
                t += 1;
            }
        }
        string ans;

        for (auto j:message) {
            if (j == ' ') ans += j;
            else ans += char(int(j) - dictionary[j]);
        }
        return ans;
    }
};