class Solution {
  public:
    long long f(int i, int j, int k, vector<vector<int>>& arr, vector<vector<vector<long long>>>& dp){
        if(i==0 && j==0){
            if(k==arr[i][j]) return 1;
            else return 0;
        }
        if(i<0 || j<0) return 0;
        
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        
        long long up = 0; long long left = 0;
        if(arr[i][j]<=k) up += f(i-1, j, k-arr[i][j], arr, dp);
        if(arr[i][j]<=k) left += f(i, j-1, k-arr[i][j], arr, dp);
        return dp[i][j][k] = up+left;
    }
    
    int numberOfPath(vector<vector<int>>& mat, int k) {
        // Code Here
        int n=mat.size(); int m=mat[0].size();
        vector<vector<vector<long long>>> v(n, vector<vector<long long>>(m, vector<long long>(k + 1, -1)));
        
       return f(n-1, m-1, k, mat, v);
    }
};