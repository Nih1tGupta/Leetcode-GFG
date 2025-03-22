class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int c=0;
        vector<vector<int>>adj(n);
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
           adj[u].push_back(v);
           adj[v].push_back(u);
        }
        vector<bool>vis(n,false);
       for(int i=0;i<n;i++){
            vector<int>v;
            queue<int>q;
            q.push(i);
            vis[i]=true;
            while(!q.empty()){
                int curr=q.front();
                q.pop();
                v.push_back(curr);
                for(auto it:adj[curr]){
                    if(!vis[it]){
                        q.push(it);
                        vis[it]=1;
                    }
                }
            }
            bool isposs=true;
            for(auto it:v){
                if(adj[it].size()!=v.size()-1){
                    isposs=false;
                    break;
                }
            }
            if(isposs){c++;}
       
       }
       return c;
    }
};