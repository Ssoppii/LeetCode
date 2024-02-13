class Solution:
    def manhattanDistance(self, start, end):
        return abs(start[0]-end[0]) + abs(start[1]-end[1])

    def minCostConnectPoints(self, points: List[List[int]]) -> int:
        n = len(points)
        distance = [float('inf')] * n
        visited = set()
        ans = 0
        
        start = 0
        distance[start] = 0
        min_heap = [(0, start)]

        while min_heap:
            dist, v = heapq.heappop(min_heap)

            if v in visited:
                continue
            
            visited.add(v)
            ans += dist

            for i in range(n):
                if i not in visited:
                    manhattan_dist = self.manhattanDistance(points[v], points[i])
            
                    if manhattan_dist < distance[i]:
                        distance[i] = manhattan_dist
                        heapq.heappush(min_heap, (manhattan_dist, i))

        return ans