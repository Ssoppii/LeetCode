class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        # node는 시작하는 지점, path는 node에서부터 갈 수 있는 경로, paths는 정답 저장
        def _helper(node, path, paths):
            # node의 개수-1이 가장 큰 값의 node이므로
            if node == len(graph) - 1:
                paths.append(path[:])
                return
            for neighbor in graph[node]:
                _helper(neighbor, path + [neighbor], paths)

        paths = []
        _helper(0, [0], paths)
        return paths