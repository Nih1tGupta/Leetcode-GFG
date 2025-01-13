class Solution {
public:
    bool bfs(vector<vector<int>>&graph,int s,vector<int>&col){
        col[s]=0;
        queue<int>q;
        q.push(s);
        while(!q.empty()){
    int node=q.front();q.pop();
                for(auto it:graph[node]){
                      if(col[it]==-1){
                col[it]=!col[node];
                q.push(it);
            }
            else if(col[it]==col[node])return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>col(n,-1);
       for(int i=0;i<n;i++){
        if(col[i]==-1){
            if(bfs(graph,i,col)==false)return false;
        }
       }
       return true;
    }
};