class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m - k + 1, vector<int>(n - k + 1));

        for (int i = 0; i <= m - k; ++i) {
            for (int j = 0; j <= n - k; ++j) {
                vector<int> elems;
                // Collect elements in k x k submatrix starting at (i, j)
                for (int r = i; r < i + k; ++r) {
                    for (int c = j; c < j + k; ++c) {
                        elems.push_back(grid[r][c]);
                    }
                }

                sort(elems.begin(), elems.end());
                elems.erase(unique(elems.begin(), elems.end()), elems.end());

                if (elems.size() == 1) {
                    ans[i][j] = 0;
                } else {
                    int minDiff = INT_MAX;
                    for (int x = 1; x < (int)elems.size(); ++x) {
                        minDiff = min(minDiff, elems[x] - elems[x - 1]);
                    }
                    ans[i][j] = minDiff;
                }
            }
        }

        return ans;
    }
};