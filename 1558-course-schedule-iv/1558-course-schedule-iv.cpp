class Solution {
public:
    bool dfs( vector<int>adj[],int s,int d,vector<bool>&vis){
        vis[s]=1;
        if(s==d)return 1;
        bool can=false;
        for(auto &it:adj[s]){
            if(!vis[it]){
            can= can||dfs(adj,it,d,vis);
            }
        }
        return can;
    }
    vector<bool> checkIfPrerequisite(int courses, vector<vector<int>>& pre, vector<vector<int>>& q) {
        int sz=q.size();
        vector<bool>v(sz);
        vector<int>adj[courses];
        for(int i=0;i<pre.size();i++){
            int u=pre[i][0]; int v=pre[i][1];
            adj[u].push_back(v);
        }
        for(int i=0;i<sz;i++){
            vector<bool>vis(courses,false);  
            v[i]=dfs(adj,q[i][0],q[i][1],vis);
        }
        return v;
    }
};