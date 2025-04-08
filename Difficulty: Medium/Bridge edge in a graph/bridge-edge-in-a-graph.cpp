//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void dfs(vector<vector<int>>&adj,int src,vector<bool>&vis){
        vis[src]=1;
        for(auto it:adj[src]){
            if(!vis[it]){
            dfs(adj,it,vis);
            }
        }
    }
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
        // Code here
        // something related to cycle
        // if we can reach to d (After removing edge c-d) ,then it is false;
        // 1->remove edge c-d
        // 2->perform dfs from c and conclude
        vector<vector<int>>adj(V);
        for(auto it:edges){
            int u=it[0]; int v=it[1];
            if((u==c and v==d ) || (d==u and v==c)){continue;}
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>vis(V,0);
         dfs(adj,c,vis);
         return !vis[d];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        vector<vector<int>> edges(E);
        int i = 0;
        while (i++ < E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            edges[i - 1].push_back(u);
            edges[i - 1].push_back(v);
        }

        int c, d;
        cin >> c >> d;

        Solution obj;
        bool l = obj.isBridge(V, edges, c, d);
        if (l)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends