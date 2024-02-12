class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
       int n = matrix.size(), m = matrix[0].size();
        for(int i=0;i<m;i++){
            int mx = 0;
            for(int j=0;j<n;j++) mx = max(mx, matrix[j][i]);
            for(int j=0;j<n;j++) if(matrix[j][i] == -1) matrix[j][i] = mx;
        }
        return matrix;
    }
};