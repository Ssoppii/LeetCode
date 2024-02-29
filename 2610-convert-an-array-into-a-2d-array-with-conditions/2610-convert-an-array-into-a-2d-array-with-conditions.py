class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        if len(nums) == len(set(nums)):
            return [nums]

        dct = {}
        for i in range(len(nums)):
            if nums[i] not in dct.keys():
                dct[nums[i]] = 1
            else:
                dct[nums[i]] += 1
        
        result = []
        while True:
            tmp = []
            for k in dct.keys():
                if dct[k] != 0:
                    tmp.append(k)
                    dct[k] -= 1
            if tmp == []:
                break
            result.append(tmp)
    
        return result