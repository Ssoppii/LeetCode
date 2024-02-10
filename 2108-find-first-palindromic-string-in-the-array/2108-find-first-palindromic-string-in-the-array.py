class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        ans = ''

        for word in words:
            is_palindrome = True
            length = len(word)//2
            for i in range(length):
                if word[i] != word[-i-1]:
                    is_palindrome = False
                    break
            if is_palindrome == True:
                ans = word
                break

        return ans