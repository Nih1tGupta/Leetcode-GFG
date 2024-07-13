//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  #define mod (int)(1e9+7)
     int solve(int i,int j,int n,int m,vector<vector<int>> &grid,vector<vector<int>> &dp){
         if(i>=n  || j>=m || grid[i][j]==0)return 0;
         if(i==n-1 and j==m-1)return 1;
         if(dp[i][j]!=-1)return dp[i][j];
         int d=solve(i+1,j,n,m,grid,dp);
            int r=solve(i,j+1,n,m,grid,dp);
            return dp[i][j]=(d+r)%mod;
     }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(0,0,n,m,grid,dp);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends