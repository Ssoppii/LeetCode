class Solution {
public:
    int manhattanDistance(vector<int> start, vector<int> end) {
        return abs(start[0]-end[0]) + abs(start[1]-end[1]);
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<int> distance(n, 10000000);
        set<int> visited;
        int ans = 0;
        
        int start = 0;
        distance[start] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
        min_heap.push({0, start});

        while (!min_heap.empty()) {
            auto [dist, v] = min_heap.top();
            min_heap.pop();

            if (visited.find(v) != visited.end()) {
                continue;
            }

            visited.insert(v);
            ans += dist;

            for (int i = 0; i < n; ++i) {
                if (visited.find(i) == visited.end()) {
                    int manhattan_dist = manhattanDistance(points[v], points[i]);

                    if (manhattan_dist < distance[i]) {
                        distance[i] = manhattan_dist;
                        min_heap.push({manhattan_dist, i});
                    }
                }
            }
        }
        return ans;
    }
};