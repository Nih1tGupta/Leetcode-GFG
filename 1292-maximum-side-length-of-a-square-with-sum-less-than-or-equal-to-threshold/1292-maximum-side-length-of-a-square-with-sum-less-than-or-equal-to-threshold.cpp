class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m = mat.size();
        int n = mat[0].size();
        int max_k = 0;

        // 1. Build 2D Prefix Sum table
        // P[i][j] stores the sum of mat from (0,0) to (i-1, j-1)
        vector<vector<int>> P(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                P[i][j] = mat[i-1][j-1] + P[i-1][j] + P[i][j-1] - P[i-1][j-1];
            }
        }

        // 2. Brute force every possible square
        // i, j are the top-left coordinates
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                // k is the side length
                for (int k = 1; i + k - 1 <= m && j + k - 1 <= n; k++) {
                    
                    // Calculate sum of k*k square using the prefix sum formula
                    int r2 = i + k - 1;
                    int c2 = j + k - 1;
                    int currentSum = P[r2][c2] - P[i-1][c2] - P[r2][j-1] + P[i-1][j-1];

                    if (currentSum <= threshold) {
                        max_k = max(max_k, k);
                    } else {
                        // Optimization: If a k*k square exceeds threshold, 
                        // a (k+1)*(k+1) square at this same (i, j) will also exceed it.
                        break; 
                    }
                }
            }
        }

        return max_k;
    }
};