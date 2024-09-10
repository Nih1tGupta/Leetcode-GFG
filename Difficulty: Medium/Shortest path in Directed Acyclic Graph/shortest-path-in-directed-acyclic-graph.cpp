//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  void dfs(int i,vector<pair<int,int>>adj[],int vis[],stack<int>&st){
	    vis[i]=1;
	    for(auto it:adj[i]){
	        int v=it.first;
	        if(!vis[v]){dfs(v,adj,vis,st);}
	    }
	    st.push(i);
	}
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
          vector<pair<int, int>> adj[N];
        for (int i = 0; i < M; i++) {
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
        }
        // Topological Sort
        vector<int> indegree(N, 0);
        for (int i = 0; i < N; i++) {
            for (auto &it : adj[i]) {
                indegree[it.first]++;
            }
        }
      queue<int> q;
        for (int i = 0; i < N; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        vector<int> topo;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            
            for (auto &it : adj[node]) {
                indegree[it.first]--;
                if (indegree[it.first] == 0) {
                    q.push(it.first);
                }
            }
        }
        // step-3 relax edges
         vector<int> dis(N, INT_MAX);
        dis[0] = 0;  // Assuming 0 is the source vertex
        
        // Relax edges in topological order
        for (int i = 0; i < topo.size(); i++) {
            int node = topo[i];
            if (dis[node] != INT_MAX) {
                for (auto &it : adj[node]) {
                    if (dis[node] + it.second < dis[it.first]) {
                        dis[it.first] = dis[node] + it.second;
                    }
                }
            }
        }
          for (int i = 0; i < N; i++) {
            if (dis[i] == INT_MAX) {
                dis[i] = -1;
            }
        }
        return dis;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends