class Solution {
public:


// int dfs(vector<vector<int>>& grid, vector<vector<bool>>& vis, int m, int n, int x, int ct, int i, int j) {
//     if (!vis[i][j]) { 
//         if (grid[i][j] < x) {
//             vis[i][j] = true; // Mark cell as visited
//             ct++; // Increment count since it's the first visit
//         } else {
//             return ct; // Stop if the value is too large
//         }
//     }

//     int dir[4] = {0, 1, 0, -1};
//     int dic[4] = {-1, 0, 1, 0};

//     for (int k = 0; k < 4; k++) {
//         int nr = i + dir[k], nc = j + dic[k];

//         // Bounds check first, then check if it's unvisited and meets the condition
//         if (nr >= 0 && nr < m && nc >= 0 && nc < n && !vis[nr][nc] && grid[nr][nc] < x) {
//             ct = dfs(grid, vis, m, n, x, ct, nr, nc);
//         }
//     }
    
//     return ct;
// }
// int dfs(vector<vector<int>>& grid, vector<vector<bool>>& vis, int m, int n, int x, int i, int j) {
//     if (i < 0 || i >= m || j < 0 || j >= n || vis[i][j] || grid[i][j] >= x)
//         return 0;

//     vis[i][j] = true; // Mark as visited
//     int ct = 1; // First time visiting, count this cell

//     // 4 possible moves (up, down, left, right)
//     int dir[4] = {0, 1, 0, -1};
//     int dic[4] = {-1, 0, 1, 0};

//     for (int k = 0; k < 4; k++) {
//         int nr = i + dir[k], nc = j + dic[k];
//         ct += dfs(grid, vis, m, n, x, nr, nc); // Accumulate count
//     }

//     return ct;
// }

// vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& q) {
    // vector<int> v;
    // int m = grid.size(), n = grid[0].size();
    // for (int val : q) {
    //     vector<vector<bool>> vis(m, vector<bool>(n, false)); 
    //     v.push_back(dfs(grid, vis, m, n, val, 0,0, 0)); 
    // }
    // return v;
     int n, m, k;
    int r[4] = {-1, 0, 1, 0};
    int c[4] = {0, 1, 0, -1};
    using p = pair<int, pair<int, int>>;

    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        n = grid.size();
        m = grid[0].size();
        k = queries.size();
        vector<int> ans(k);
        vector<pair<int, int>> sortedQueries;
        
        for (int i = 0; i < k; i++) {
            sortedQueries.push_back({queries[i], i});
        }
        sort(sortedQueries.begin(), sortedQueries.end()); // Sort queries

        vector<vector<int>> vis(n, vector<int>(m, 0));
        int points = 0;

        priority_queue<p, vector<p>, greater<p>> pq;
        pq.push({grid[0][0], {0, 0}});
        vis[0][0] = 1;  // ✅ Mark (0,0) as visited immediately

        for (auto &[queryVal, queryInd] : sortedQueries) {
            while (!pq.empty() && pq.top().first < queryVal) {
                p topElement = pq.top(); // ✅ Store pq.top() before popping
                pq.pop();
                int i = topElement.second.first, j = topElement.second.second;

                points++;

                for (int dir = 0; dir < 4; dir++) {
                    int nR = i + r[dir], nC = j + c[dir];

                    if (nR >= 0 && nR < n && nC >= 0 && nC < m && !vis[nR][nC]) {
                        vis[nR][nC] = 1; // ✅ Mark as visited
                        pq.push({grid[nR][nC], {nR, nC}});
                    }
                }
            }
            ans[queryInd] = points;
        }
        return ans;
    }
};