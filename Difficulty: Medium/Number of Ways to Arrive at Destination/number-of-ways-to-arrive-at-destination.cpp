//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  const int mod=1e9 + 7;
    int countPaths(int n, vector<vector<int>>& roads) {
        // code here
        vector<pair<int,int>>adj[n];
        for(auto it:roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        vector<long long>dist(n,LONG_MAX);dist[0]=0;
        vector<int>ways(n,0);ways[0]=1;
        // there is only 1 way we can start
        while(!pq.empty()){
            long long  d=pq.top().first;
            long long  node=pq.top().second;pq.pop();
            for(auto it:adj[node]){
                long long  adjNode=it.first; long long  edgewt=it.second;
                if(d+edgewt<dist[adjNode]){
                    dist[adjNode]=d+edgewt;
                    pq.push({d+edgewt,adjNode});
                    ways[adjNode]=ways[node];
                }
                else if(d+edgewt==dist[adjNode]){
                    ways[adjNode]=(ways[adjNode]+ways[node])%mod;
                }
            }
        }
        
        return ways[n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    
cout << "~" << "\n";
}

    return 0;
}
// } Driver Code Ends