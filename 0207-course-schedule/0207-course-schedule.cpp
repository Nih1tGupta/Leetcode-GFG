class Solution {
public:
    bool dfs(int node,vector<int>&vis,vector<int>&pv, vector<vector<int>>&adj){
        vis[node]=1;
        pv[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfs(it,vis,pv,adj)==true)return true;
            }
            else{
                if(pv[it])return true;
            }
        }
        pv[node]=0;
        return false;
    }
    bool canFinish(int c, vector<vector<int>>& pre) {
        // if doing by dfs--just detect cycle
        int n=pre.size();
        vector<vector<int>>adj(c);
        for(int i=0;i<n;i++){
            adj[pre[i][1]].push_back(pre[i][0]);
            // [0,1] to do zero ,first finish 1
            // 1->0
        }
        // now to detect cycle in DAG -->WE TAKE PATHVIS AND VIS
        int v=adj.size();
        vector<int>vis(v,0);
        vector<int>pv(v,0);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(dfs(i,vis,pv,adj)==true)return false;
            }
        }
        return true;
    }
};