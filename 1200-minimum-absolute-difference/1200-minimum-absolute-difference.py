class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        result = []
        arr = sorted(arr)
        diff = 10**6
        for i in range(len(arr)-1):
            if arr[i+1] - arr[i] < diff:
                diff = arr[i+1] - arr[i]
        
        for i in range(len(arr)-1):
            if arr[i+1] - arr[i] == diff:
                result.append([arr[i], arr[i+1]])

        return result