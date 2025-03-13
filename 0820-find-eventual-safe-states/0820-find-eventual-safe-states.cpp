class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       int V = graph.size();
        int indegree[V];
        for(int i=0;i<V;i++){
            indegree[i]=0;
        }
        vector<int> adjRev[V];
        for(int i=0;i<V;i++){
            for(auto nodes : graph[i]){
                adjRev[nodes].push_back(i);
                indegree[i]++;
            }
        }
        vector<int> safeNodes;
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0) {
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safeNodes.push_back(node);
            for(auto it:adjRev[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }

        sort(safeNodes.begin(),safeNodes.end());
        return safeNodes;
    }
};