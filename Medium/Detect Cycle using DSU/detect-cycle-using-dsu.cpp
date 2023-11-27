//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to detect cycle using DSU in an undirected graph.
int find(int i,int parent[]){
        if(parent[i]==i){
            return i;
        }
        parent[i]=find(parent[i],parent);
        return parent[i];
    }
    void Union(int i,int j,int rank[],int parent[]){
         int a=find(i,parent);
         int b=find(j,parent);
         if(a==b )return;
         int irank=rank[a];
         int jrank=rank[b];
         if(irank<jrank){
            parent[a]=b; 
         }else if(irank>jrank){
             parent[b]=a;
         }else{
             parent[a]=b;
             rank[b]++;
         }
    }
    int detectCycle(int V, vector<int>adj[])
    {
        int rank[V]={},parent[V];
        for(int i=0;i<V;i++)parent[i]=i;
        for(int i=0;i<V;i++){
            for(int j=0;j<adj[i].size();j++){
                if(i<adj[i][j]){
                    int first=find(i,parent);
                    int second=find(adj[i][j],parent);
                    if(first==second)return 1;
                    else Union(first,second,rank,parent);
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends