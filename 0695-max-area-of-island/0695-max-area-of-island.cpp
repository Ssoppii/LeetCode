class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int r = grid.size(), c = grid[0].size();
        vector<vector<bool>> visited(r, vector(c, false));
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};

        for (int i=0;i<r;i++) {
            for (int j=0;j<c;j++) {
                if (grid[i][j] == 0 || visited[i][j])
                    continue;
                queue<pair<int, int>> q;
                int island = 0;
                q.push({i, j});
                visited[i][j] = true;
                while (!q.empty()) {
                    auto front = q.front();
                    q.pop();
                    island++;
                    for (int d=0;d<4;d++) {
                        int qr = front.first + dx[d];
                        int qc = front.second + dy[d];
                        if (qr<0 || qr>=r || qc<0 || qc>=c) {
                            continue;
                        }
                        if (grid[qr][qc] == 0) continue;
                        if (visited[qr][qc]) continue;
                        q.push({qr, qc});
                        visited[qr][qc] = true;
                    }
                }
                ans = max(ans, island);
            }
        }
        return ans;
    }
};