class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;

        for (auto word:words) {
            bool is_palindrome = true;
            int length = word.size();
            for (int i=0;i<length/2;i++) {
                if (word[i] != word[length-i-1]) {
                    is_palindrome = false;
                    break;
                }
            }
            if (is_palindrome == true) {
                ans = word;
                return ans;
            }
        }           
        return ans;
    }
};