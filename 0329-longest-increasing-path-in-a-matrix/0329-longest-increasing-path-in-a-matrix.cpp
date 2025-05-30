class Solution {
public:
  int dfs(int i, int j, vector<vector<int>>& mat, vector<vector<int>>& dp, int m, int n, int dr[], int dc[]) {
        if (dp[i][j] != -1) return dp[i][j];
        
        int maxLen = 1; // path length starting at this cell is at least 1
        for (int k = 0; k < 4; ++k) {
            int nr = i + dr[k];
            int nc = j + dc[k];
            if (nr >= 0 && nr < m && nc >= 0 && nc < n && mat[nr][nc] > mat[i][j]) {
                maxLen = max(maxLen, 1 + dfs(nr, nc, mat, dp, m, n, dr, dc));
            }
        }
        return dp[i][j] = maxLen;
        }
    int longestIncreasingPath(vector<vector<int>>& mat) {
        int m=mat.size(); int n=mat[0].size();
        int ans=1;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        vector<vector<int>> dp(m, vector<int>(n, -1));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ans = max(ans, dfs(i, j, mat, dp, m, n, dr, dc));
            }
        }
    return ans;
    }
};