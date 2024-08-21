//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
         vector<int> res(N, -1), adj[N+1]; bool vis[N+1]; 
        int dist = -1; memset(vis, false, sizeof(vis));
        queue<int> q; q.push(src); vis[src] = true;
        for ( auto i : edges ){
            int u = i[0], v = i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        while ( !q.empty() ){
            int k = q.size();
            dist++;
            while ( k-- ){
                int p = q.front(); q.pop();
                res[p] = dist;
                for ( auto i : adj[p] ){
                    if ( !vis[i] ){
                        vis[i] = true;
                        q.push(i);
                    }
                }
            }
        } return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends