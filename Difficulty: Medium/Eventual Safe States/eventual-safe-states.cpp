//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   bool dfs(int node,int vis[],int vis2[],vector<int>adj[],int c[]){
        vis[node]=1;
        vis2[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
            if(dfs(it,vis,vis2,adj,c)==true){return true;}
            }
            else if(vis2[it]){return true;}
        }
        c[node]=1;
    vis2[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
         int vis[V]={0};
        int vis2[V]={0};
        int c[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
            dfs(i,vis,vis2,adj,c);
            }
        }
        vector<int>v;
        for(int i=0;i<V;i++){
            if(c[i]==1){v.push_back(i);}
        }
        sort(v.begin(),v.end());
        return v;
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

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends