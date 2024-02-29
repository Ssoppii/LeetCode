class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        dictionary = {}
        t = 0
        for i in key:
            if i not in dictionary.keys() and i != ' ':
                dictionary[i] = ord(i) - (97 + t)
                t += 1

        ans = ''
        for j in message:
            if j == ' ':
                ans += j
            else:
                ans += chr(ord(j) - dictionary[j])
        return ans