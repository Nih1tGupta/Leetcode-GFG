class Solution {
  public:
    bool dfs(vector<int>&ans,int node,vector<int>&vis,vector<vector<int>>&adj,vector<int>&pv){
        vis[node]=1;
        pv[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfs(ans,it,vis,adj,pv)==true){return true;}
            }
            else if(pv[it]==1){return true;}
        }
        ans.push_back(node);
        pv[node]=0;
        return false;
    }
    vector<int> findOrder(int n, vector<vector<int>> prerequisites) {
        // code here
        vector<vector<int>>adj(n);
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        vector<int> visited(n,0);
        vector<int> pathVisited(n,0);
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(dfs(ans,i,visited,adj,pathVisited)==true) return {};
            }
        }
        
        return ans;
    }
};