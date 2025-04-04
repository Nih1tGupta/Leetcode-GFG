//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     void dfs(int i,int j,int n,int m,vector<vector<char>>&grid,vector<vector<int>>&vis,vector<int>&dr,vector<int>&dc)
    {
        vis[i][j]=1;
        for(int k=0;k<8;k++){
            int nr=i+dr[k]; int nc=j+dc[k];
            if(nr>=0 and nr<n and nc>=0 and nc<m and grid[nr][nc]=='L' and !vis[nr][nc]){
                dfs(nr,nc,n,m,grid,vis,dr,dc);
            }
        }
    }
    int countIslands(vector<vector<char>>& grid) {
        // Code here
         int n=grid.size();int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<int>dr={-1,0,1,0,-1,-1,1,1};
        vector<int>dc={0,1,0,-1,-1,1,1,-1};
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L' and !vis[i][j]){
                    c++;
                    dfs(i,j,n,m,grid,vis,dr,dc);
                }
            }
        }
        return c;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.countIslands(grid);
        cout << ans << '\n';

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends