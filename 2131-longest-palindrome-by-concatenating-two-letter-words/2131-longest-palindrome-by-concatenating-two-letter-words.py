class Solution:
    def longestPalindrome(self, words: List[str]) -> int:
        dictionary = {}
        odd_check = False
        ans = 0

        for word in words:
            if word in dictionary.keys():
                dictionary[word] += 1
            else:
                dictionary[word] = 1
        
        for word in dictionary.keys():
            if word[0] == word[1]:
                if dictionary[word] % 2 == 1:
                    if odd_check == False:
                        ans += dictionary[word] * 2
                        odd_check = True
                    else:
                        ans += (dictionary[word] - 1) * 2
                else:
                    ans += dictionary[word] * 2
                
            reversed_word = word[1] + word[0]
            if word[0] != word[1] and reversed_word in dictionary.keys():
                ans += min(dictionary[reversed_word], dictionary[word]) * 2

        return ans