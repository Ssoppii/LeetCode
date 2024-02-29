class Solution:
    def makeSmallestPalindrome(self, s: str) -> str:
        for i in range(len(s)//2):
            if s[i] != s[len(s)-i-1]:
                if s[i] < s[len(s)-i-1]:
                    s = s[:len(s)-i-1] + s[i] + s[len(s)-i:]
                else:
                    s = s[:i] + s[len(s)-i-1] + s[i+1:]
        return s