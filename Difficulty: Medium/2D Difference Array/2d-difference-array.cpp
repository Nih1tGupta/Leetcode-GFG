class Solution {
  public:
    vector<vector<int>> applyDiff2D(vector<vector<int>>& mat,
                                    vector<vector<int>>& opr) {
        // code here
        // int n = mat.size();in
        // /t m = mat[0].size();
    // for (const auto& op : opr) {
    //     int v = op[0];
    //     int r1 = op[1], c1 = op[2], r2 = op[3], c2 = op[4];
    //     for (int i = r1; i <= r2; i++) {
    //         for (int j = c1; j <= c2; j++) {
    //             mat[i][j] += v;
    //         }
    //     }
    // }
    // return mat;
    // topic->  diff array
     int n = mat.size();
        int m = mat[0].size();
        
        int size = n*m;
        vector<vector<int>>diff(n+1, vector<int>(m+1,0));
        
        for(auto& it: opr)
        {
            int val = it[0];
            int r1 = it[1];int c1 = it[2];
            int r2 = it[3];int c2 = it[4];

           diff[r1][c1] += val;
           diff[r1][c2+1] -= val;
           
           diff[r2+1][c1] -= val;
           diff[r2+1][c2+1] += val;
        }
        // Row Sum 
        for(int r = 0 ; r < n ; r++){
            for(int c= 1 ; c < m ; c++){
                diff[r][c] += diff[r][c-1];
            }
        }
        
        // col Sum
        for(int c = 0 ; c < m ; c++){
            for(int r = 1 ; r < n ; r++){
                diff[r][c] += diff[r-1][c];
            }
        }
        
        for(int r = 0 ; r < n ; r++){
            for(int c = 0 ; c < m ; c++){
                mat[r][c] += diff[r][c];
            }
        }
        
        return mat;
    }
};