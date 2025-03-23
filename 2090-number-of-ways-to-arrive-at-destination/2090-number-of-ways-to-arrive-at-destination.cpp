class Solution {
public:

    int countPaths(int n, vector<vector<int>>& roads) {
              int MOD = 1e9 +7;
        vector<vector<long long>> adjList[n+1];
        for(int i = 0 ; i < roads.size() ; i++){
            long long u = roads[i][0];
            long long v = roads[i][1];
            long long time = roads[i][2];
            adjList[u].push_back({v, time});
            adjList[v].push_back({u, time});
        }
         vector<long long> ways(n,0);
        ways[0] = 1;
        vector<long long> dist(n, LLONG_MAX);
        dist[0] = 0;
        priority_queue<vector<long long>, vector<vector<long long>>, greater<vector<long long>>> pq;
        pq.push({0, 0}); // dist, node
        while(!pq.empty()){
            auto front = pq.top();
            pq.pop();
            
            long long d = front[0];
            long long currcity = front[1];
            
            for(auto &it : adjList[currcity]){
                long long nextcity = it[0];
                long long edgeWt = it[1];
                if( d + edgeWt < dist[nextcity]){
                    dist[nextcity] = d + edgeWt;
                    pq.push({ d + edgeWt , nextcity});
                    ways[nextcity] = ways[currcity]%MOD;
                }
                else if(d + edgeWt == dist[nextcity]){
                    ways[nextcity] += (ways[currcity])%MOD;   
                }
            }
        }
        
        return ways[n-1]%MOD;
    }
};