//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(vector<vector<char>>&grid,vector<vector<int>>&vis,int i,int j){
       int n=grid.size();int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({i,j});
         vis[i][j]=1;
         while(!q.empty()){
             int r=q.front().first;
             int c=q.front().second;q.pop();
             for(int delr=-1;delr<=1;delr++){
                 for(int delc=-1;delc<=1;delc++){
                     int nr=r+delr;int nc=c+delc;
                     if( nr>=0 and nr<n and nc>=0 and nc<m and grid[nr][nc]=='1' and !vis[nr][nc]){
                         q.push({nr,nc});vis[nr][nc]=1;
                     }
                 }
             }
             
         }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
       int n=grid.size();int m=grid[0].size();
        int count=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' and !vis[i][j]){
                    count++;
                    bfs(grid,vis,i,j);
                }
            }
        }
        return count;
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
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends