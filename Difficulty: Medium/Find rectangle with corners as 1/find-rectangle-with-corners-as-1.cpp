class Solution {
  public:
    bool findRectangle(vector<vector<int>> &mat, int i, int j, int n, int m){
        for(int di = 1; i + di < n; di++){
            for(int dj = 1; j + dj < m; dj++){
                if(mat[i][j + dj] == 1 && mat[i + di][j] == 1 && mat[i + di][j + dj] == 1){
                    return true;
                }
            }
        }
        return false;
    }
    
    
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 1 && findRectangle(mat, i, j, n, m)){
                    return true;
                }
            }
        }
        return false;
    }
};