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
    //     vector<int>adj[N];
    //     for(auto it:edges){
    //         adj[it[0]].push_back(it[1]);
    //           adj[it[1]].push_back(it[0]);
    //     }
    //     int dis[N];
    //     for(int i=0;i<N;i++){dis[i]=1e9;}
    //     dis[src]=0;
    //   queue<int>q;
    //   q.push(src);
    //   while(!q.empty()){
    //       int f=q.front();q.pop();
    //       for(auto it:adj[f]){
    //           if(dis[f]+1<dis[it]){dis[it]=1+dis[f]; q.push(it);}
             
    //       }
    //   }
    //   vector<int>v(N,-1);
    //   for(int i=0;i<N;i++){
    //       if(dis[i]!=1e9){v[i]=dis[i];}
    //   }
    //   return v; 
     vector<int>adj[N];
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>dist(N,-1);
        dist[src]=0;
        queue<pair<int,int>>q;
        q.push({src,0});
        while(!q.empty()){
            int node=q.front().first;
            int d=q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(dist[it]==-1){
                    dist[it]=d+1;
                    q.push({it,d+1});
                }
            }
        }
        return dist;
  
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