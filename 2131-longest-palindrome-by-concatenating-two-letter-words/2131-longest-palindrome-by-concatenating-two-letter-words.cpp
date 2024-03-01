class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> dictionary;
        bool odd_check = false;
        int ans = 0;

        for (auto word : words) {
            if (dictionary.find(word) != dictionary.end()) {
                dictionary[word] += 1;
            } 
            else {
                dictionary[word] = 1;
            }
        }

        for (auto word_freq : dictionary) {
            string word = word_freq.first;
            int freq = word_freq.second;

            if (word[0] == word[1]) {
                if (freq % 2 == 1) {
                    if (!odd_check) {
                        ans += freq * 2;
                        odd_check = true;
                    } 
                    else {
                        ans += (freq - 1) * 2;
                    }
                } 
                else {
                    ans += freq * 2;
                }
            }

            string reversed_word = word.substr(1) + word[0];
            if (word[0] != word[1] && dictionary.find(reversed_word) != dictionary.end()) {
                ans += min(dictionary[reversed_word], freq) * 2;
            }
        }
        return ans;
    }
};