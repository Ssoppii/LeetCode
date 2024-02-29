class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        dct = {}
        answer = []

        for i in range(len(groupSizes)):
            if groupSizes[i] not in dct.keys():
                dct[groupSizes[i]] = [i]
            else:
                dct[groupSizes[i]].append(i)

        for key, group in dct.items():
            if key == len(group):
                answer.append(group)
            else:
                answer.extend([group[i:i + key] for i in range(0, len(group), key)])

        return answer
