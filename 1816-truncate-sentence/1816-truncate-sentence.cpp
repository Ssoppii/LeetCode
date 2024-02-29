class Solution {
public:
    string truncateSentence(string s, int k) {
        string answer = "";

        for (int i=0;i<s.size();i++) {
            if (s[i] == ' ') k--;
            if (k == 0) break;
            answer += s[i];
        }

        return answer;
    }
};