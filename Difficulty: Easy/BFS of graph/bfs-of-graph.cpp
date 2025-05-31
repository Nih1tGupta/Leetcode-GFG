class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        vector<int>v;
        queue<int>q;
        q.push(0);
        v.push_back(0);
        int n=adj.size();
        vector<int>vis(n,0);
        while(!q.empty()){
            int top= q.front(); q.pop();
            vis[top]=1;
            for(auto it:adj[top]){
                if(!vis[it]){
                    v.push_back(it);
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
    return v;
    }
};