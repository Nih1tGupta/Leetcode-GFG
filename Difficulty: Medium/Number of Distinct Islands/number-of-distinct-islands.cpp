//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
   vector<pair<int,int>>directions = {{-1 , 0} , {1 , 0} , {0 , -1} , {0 , 1}};
    void dfs(int i , int j , vector<vector<int>>& vis , vector<vector<int>>& grid
    , set<vector<pair<int,int>>>& st , int r0 , int c0,vector<pair<int,int>>&vec)
    {
        vis[i][j] = 1;
        vec.push_back({i - r0 , j - c0});
        int n = grid.size();
        int m = grid[0].size();
        
        for(auto dir : directions){
                int nr = i + dir.first;
                int nc = j + dir.second;
                if(nr >= 0 && nr < n && nc >= 0 && nc <m && grid[nr][nc] == 1 
                && !vis[nr][nc])
                dfs(nr , nc , vis ,grid , st , r0 , c0,vec);
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size(); int m=grid[0].size();
        // vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>st;
        vector<vector<int>>vis(n , vector<int>(m,0));
        
        for(int i = 0; i<n; i++)
        {
            for(int j  =0; j<m ; j++)
            {
                if(!vis[i][j] && grid[i][j] == 1)
                {
                    vector<pair<int,int>> vec;
                    dfs(i,j,vis,grid,st, i , j,vec);
                    st.insert(vec);
                }
            }
        }
        return st.size();
        
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
    }
}
// } Driver Code Ends