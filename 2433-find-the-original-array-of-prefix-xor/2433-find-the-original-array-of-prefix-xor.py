class Solution:
    def findArray(self, pref: List[int]) -> List[int]:
        if len(pref) == 0 or len(pref) == 1:
            return pref
        
        else:
            ans = [pref[0]]
            for i in range(len(pref)-1):
                ans.append(pref[i] ^ pref[i+1])
            return ans