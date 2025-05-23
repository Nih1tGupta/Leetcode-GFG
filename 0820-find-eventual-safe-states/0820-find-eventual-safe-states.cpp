class Solution {
public:
    bool dfs(int node,vector<vector<int>>& adj,vector<int> &vis,vector<int> &Pathvis){
            vis[node] = 1;
            Pathvis[node] = 1;
            // check[node] = 0;
            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    if(dfs(it,adj,vis,Pathvis)){
                        // check[node] = 0;
                        return true;
                    }
                }
                else if(Pathvis[it]){
                // check[node] = 0;
                    return true;
                }
                }
                // check[node] = 1;
                Pathvis[node] = 0;
                return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int>vis(V,0);
        vector<int>Pathvis(V,0);
        // vector<int>check(V,0);
        vector<int> ans;
        for(int i=0;i<V;i++){
                if(!vis[i]){
                    dfs(i,graph,vis,Pathvis);
                }
        }
        for(int i=0;i<V;i++){
            if(Pathvis[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};