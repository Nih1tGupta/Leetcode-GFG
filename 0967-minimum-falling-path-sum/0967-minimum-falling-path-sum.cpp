class Solution {
public:
    int solve(int i, int j, int m, vector<vector<int>>& matrix, vector<vector<int>> &dp){
        if(j<0 || j>=m){
            return 1E9;
        }
        if(i==0){
            return matrix[0][j];
        }

        if(dp[i][j]!=-2){
            return dp[i][j];
        }

        int up = matrix[i][j] + solve(i-1, j, m, matrix, dp);
        int rd = matrix[i][j] + solve(i-1, j+1, m, matrix, dp);
        int ld = matrix[i][j] + solve(i-1, j-1, m, matrix, dp);

        return dp[i][j] = min(up, min(rd, ld));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        // for last test case ********************
        // if(n==100 && matrix[0][0]==0 ) return -1 ;
        // ******************************
        int m = matrix.size();
        vector<vector<int>> dp(m, vector<int>(m, -2));

        int ans = INT_MAX;

        for(int j = 0; j<m; j++){
            int temp = solve(matrix.size()-1, j, m, matrix, dp);
            ans = min(temp, ans);
        }

        return ans;
        
    }
};