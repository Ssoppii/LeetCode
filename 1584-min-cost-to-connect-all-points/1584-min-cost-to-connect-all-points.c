int minCostConnectPoints(int** points, int pointsSize, int* pointsColSize) {
    int n = pointsSize;
    int ans = 0;
    // min값과 minidx값을 따로 저장
    int min = 0, minIndex = 0;
    // stack처럼 사용하기 위하여 top을 기억하기 위한 변수
    int top = 0;
    // 각각의 point에서의 거리를 저장하기 위한 matrix
    int distance[n][n];

    // for문을 돌면서 distance matrix에 각각의 거리 저장
    for(int i=0;i<n-1;i++) for (int j=i+1;j<n;j++)
        distance[i][j] = distance[j][i] = manhattanDistance(points[i], points[j]);
    
    // 이미 거리를 측정하여 저장한 노드인지 파악하기 위한 array
    bool visited[n];
    for(int i=0; i<n; i++) visited[i] = false;

    // 앞의 파이썬, C++에서의 heap 역할
    int stack[n];
    
    // top이 전체 points 길이만큼 돌 때까지
    while (top<n) {
        // stack을 도는데...
        for (int j=0;j<top;j++) {
            int i = stack[j];
            // stack에 들어있는 원소 기준으로 k를 갈건데, k가 방문했는지? 그리고 min값보다 distance가 작은지 확인
            for (int k=0;k<n;k++) {
                if(!visited[k] && distance[i][k] < min) {
                    // 작으면 바꿔주기~
                    min = distance[i][k];
                    minIndex = k;
                }
            }
        }
        // 한 노드에서 최단거리 찾음 이제 stack 하나 올리고, minIndex로 지정해주기(그래야 다음 stack 돌 때 출발점 찾으니까...?)
        stack[top++] = minIndex;
        // 근데 이제 이건 방문한 놈
        visited[minIndex] = true;
        // 최단거리니까 더해
        ans += min;
        // min 다시 초기화해서 다시 while문 돌 준비 끝~!
        min = INT_MAX;
    }
    return ans;
}

int manhattanDistance(int* start, int* end) {
    return abs(start[0] - end[0]) + abs(start[1] - end[1]);
}