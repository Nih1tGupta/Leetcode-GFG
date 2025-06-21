class Solution {
public:
    bool dfs(vector<int>&ans,int node,vector<vector<int>>&graph,vector<int>&vis,vector<int>&pv){
        vis[node]=1;
        pv[node]=1;

        for(auto it:graph[node]){
            if(vis[it]==0){
                if(dfs(ans,it,graph,vis,pv)==true)return true;
            }
            else if(vis[it]==1 and pv[it]==1){
                return true;
            }

        }
        ans.push_back(node);
        pv[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int>vis(V,0);
        vector<int>pv(V,0);
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                dfs(ans,i,graph,vis,pv);
            }
        }
        // int ct=0;
        // for(int i=0;i<V;i++){
        //     if(pv[i]==0){ans.push_back(i);}
        // }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
// To solve this using BFS, we first reverse all edges of the graph.
// This way, terminal (safe) nodes become nodes with zero in-degree in the reversed graph.
// Then, we apply Kahn's algorithm (BFS Topological Sort) starting from these zero in-degree nodes.
// As we remove nodes from the queue, we reduce the in-degree of their neighbors.
// All nodes we can reach this way are eventually safe, because they lead only to terminal nodes and not to cycles.

// \U0001f4cc Why Reverse Edges?
// In the original graph, you can’t easily know which nodes are "safe" without checking all paths.

// But in the reversed graph, you process from safe → toward others, ensuring no cycles.