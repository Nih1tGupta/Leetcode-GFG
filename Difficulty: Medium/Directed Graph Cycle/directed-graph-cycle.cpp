//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
          int indeg[V]={0};
	    for(int i=0;i<V;i++){
	    for(auto it:adj[i]){
	        indeg[it]++;
	    }
	    }
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        if(indeg[i]==0)q.push(i);
	    }
	    vector<int>v;
	    while(!q.empty()){
	        int front=q.front();q.pop();
	        v.push_back(front);
	        for(auto it:adj[front]){
	            indeg[it]--;
	            if(indeg[it]==0){q.push(it);}
	        }
	    }
	   if(v.size()==V)return false;
	   return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends