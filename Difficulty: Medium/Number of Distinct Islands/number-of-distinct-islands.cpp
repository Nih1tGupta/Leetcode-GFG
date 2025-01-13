//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& vis,int r,int c,vector<pair<int,int>>&v,int r0,int c0,set<vector<pair<int,int>>>&st){
        vis[r][c]=1;
        int n=grid.size(); int m=grid[0].size();
        v.push_back({r-r0,c-c0});
        int dr[4]={-1,0,1,0};
        int dc[4]={0,-1,0,+1};
        for(int i=0;i<4;i++){
            int nr=r+dr[i]; int nc=c+dc[i];
            if(nr>=0 and nr<n and nc>=0 and nc<m and vis[nr][nc]==0 and grid[nr][nc]==1){
                dfs(grid,vis,nr,nc,v,r0,c0,st);
            }
        }
        
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n=grid.size(); int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] and grid[i][j]==1){
                    vector<pair<int,int>>v;
                    dfs(grid,vis,i,j,v,i,j,s);
                    s.insert(v);
                    
                }
            }
        }
        return s.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends