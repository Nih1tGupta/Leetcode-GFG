class Solution {
  public:
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        // code here
        vector<int>adj[n];
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){indegree[it]++;}
        }
        queue<int>q;vector<int>topo;
        for(int i=0;i<n;i++){if(indegree[i]==0)q.push(i);}
        while(!q.empty()){
             int fr=q.front();q.pop();topo.push_back(fr);
	       for(auto it:adj[fr]){
	           indegree[it]--;
	           if(indegree[it]==0){q.push(it);}
	           
	       }
	       
	   }
	  if(topo.size()==n)return topo;
	  return {};
        
    }
};