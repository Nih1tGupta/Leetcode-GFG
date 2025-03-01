class Solution {
public:
    int bfs(int n,vector<vector<int>>&adjList){
        vector<bool>vis(n,false);
        queue<int>q;
        q.push(0);
        vis[0]=true;
        int lvl=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int top=q.front(); q.pop();
                if(top==n-1)return lvl;
                for(auto &it:adjList[top]){
                    if(!vis[it]){
                    q.push(it);
                    vis[it]=true;
                    }
                }
            }
            lvl++;
        }
        return -1;

    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        // unweighted me shortest path->BFS COMES FIRST IN MIND
        vector<int>ans;
        vector<vector<int>>adjList(n,vector<int>(0));
        for(int i=0;i<n-1;i++){
            adjList[i].push_back(i+1);
        }
        for(auto &road:queries){
            int u=road[0];
            int v=road[1];
            adjList[u].push_back(v);
            ans.push_back(bfs(n,adjList));
        }
        return ans;
    }
};