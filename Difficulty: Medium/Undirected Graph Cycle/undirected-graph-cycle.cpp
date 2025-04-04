//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool detect(int node,vector<int>adj[],vector<int>&vis){
        vis[node]=1;
        queue<pair<int,int>>q;
        q.push({node,-1});
        while(!q.empty()){
            int curr=q.front().first;
            int parent= q.front().second;
            q.pop();
            for(auto it:adj[curr]){
                if(!vis[it]){vis[it]=1;q.push({it,curr});}
                else if(parent!=it){return true;}
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int>adj[V];
        for(auto it:edges){
            int u=it[0]; int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i] and detect(i,adj,vis)){return true;}
        }
        
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V, E;
        cin >> V >> E;
        cin.ignore();
        vector<vector<int>> edges;
        for (int i = 1; i <= E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }

        Solution obj;
        bool ans = obj.isCycle(V, edges);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends