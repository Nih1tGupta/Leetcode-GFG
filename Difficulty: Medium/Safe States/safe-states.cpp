class Solution {
  public:
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
        vector<int>vis(V,0); vector<int>v;
        vector<int>ind(V,0);
        unordered_map<int,vector<int>>adj;
        for(auto it:edges){
            int u= it[0]; int v=it[1];
            adj[v].push_back(u);
            ind[u]++;
        }
        queue<int>q;
        for(int i = 0; i < V; i++) {
        if(ind[i] == 0) q.push(i);
    }
        while(!q.empty()){
            int top= q.front(); q.pop();
            v.push_back(top);
            for(auto it:adj[top]){
                ind[it]--;
                if(ind[it]==0)q.push(it);
            }
        }
        return v;
    }
};