class Solution {
public:
    vector<int>bfs(vector<vector<int>>adj,int n){
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)q.push(i);
        }
        while(!q.empty()){
            int front=q.front(); q.pop();
            v.push_back(front);
            for(auto it:adj[front]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        return v;
    }
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<vector<int>>v(n);
        for(int i=0;i<p.size();i++){
            v[p[i][1]].push_back(p[i][0]);
        }
        vector<int>topo=bfs(v,n);
        if(topo.size()==n)return topo;
        return {};
    }
};