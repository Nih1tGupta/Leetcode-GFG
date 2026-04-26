class Solution {
public:
     int m, n;
    vector<vector<bool>> visited;
    
    bool dfs(int x, int y, int px, int py, vector<vector<char>>& grid) {
        visited[x][y] = true;
        
        int dirs[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        
        for (auto &d : dirs) {
            int nx = x + d[0];
            int ny = y + d[1];
            
            if (nx < 0 || ny < 0 || nx >= m || ny >= n)
                continue;
            
            if (grid[nx][ny] != grid[x][y])
                continue;
            
            // Skip the parent cell
            if (nx == px && ny == py)
                continue;
            
            // If already visited → cycle found
            if (visited[nx][ny])
                return true;
            
            if (dfs(nx, ny, x, y, grid))
                return true;
        }
        
        return false;
    }
    
    bool containsCycle(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        
        visited.assign(m, vector<bool>(n, false));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j]) {
                    if (dfs(i, j, -1, -1, grid))
                        return true;
                }
            }
        }
        
        return false;
    }
};