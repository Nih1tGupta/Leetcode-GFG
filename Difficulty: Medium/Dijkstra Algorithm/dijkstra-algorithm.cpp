// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<pair<int,int>>adj[V+1];
        for(auto it:edges){
            int u=it[0]; int v=it[1]; int wt=it[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        vector<int>dist(V,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({src,0});
        dist[src]=0;
        while(!pq.empty()){
            int node=pq.top().first; int dis=pq.top().second;pq.pop();
            for(auto &it:adj[node]){
                int neigh=it.first; int more=it.second;
                if(dist[neigh]>dis+more){
                    dist[neigh]=dis+more;
                    pq.push({neigh,dist[neigh]});
                }
            }
        }
        return dist;
    }
};