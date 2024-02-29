class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        # 각 노드에서 출발하는 directed graph 형태로 나타내는 것
        adjlst = {i:[] for i in range(1, n+1)}
        for u, v, w in times:
            adjlst[u].append((v, w))
        
        min_time = [(0, k)]
        t = 0
        visited = set()
        
        while min_time:
            w1, n1 = heapq.heappop(min_time)

            if n1 in visited:
                continue

            visited.add(n1)
            t = max(t, w1)
            for n2, w2 in adjlst[n1]:
                if n2 not in visited:
                    heapq.heappush(min_time, (w1+w2, n2))
        
        if len(visited) != n:
            return -1
        else:
            return t