class Solution {
public:
    void _helper(vector<vector<int>>& graph, int node, vector<int>& path, vector<vector<int>>& paths) {
        if (node == graph.size() - 1) {
            paths.push_back(path);
            return;
        }
        for (auto neighbor : graph[node]) {
            path.push_back(neighbor);
            _helper(graph, neighbor, path, paths);
            path.pop_back(); // 초기화
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> paths;
        vector<int> path = {0};
        _helper(graph, 0, path, paths);
        return paths;
    }
};