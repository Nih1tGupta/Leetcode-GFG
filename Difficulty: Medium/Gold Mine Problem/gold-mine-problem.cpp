class Solution {
  public:
    int solve(int i,int j,vector<vector<int>>&mat,int n,int m,vector<vector<int>>&dp){
           if (i < 0 || i >= n) return 0;
    if (j == m - 1) return mat[i][j];  // Optimized base case

    if (dp[i][j] != -1)
        return dp[i][j];

    int right = solve(i, j + 1,mat,n,m,dp);
    int right_up = solve(i - 1, j + 1,mat,n,m,dp);
    int right_down = solve(i + 1, j + 1,mat,n,m,dp);

    return dp[i][j] = mat[i][j] + max({right, right_up, right_down});
    }
    int maxGold(vector<vector<int>>& mat) {
        // code here
        int n=mat.size(); int m=mat[0].size();
        int maxi=INT_MIN;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            maxi= max( maxi, solve(i,0,mat,n,m,dp));
        }
        return maxi;
    }
};