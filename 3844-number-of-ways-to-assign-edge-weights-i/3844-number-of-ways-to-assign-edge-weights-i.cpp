class Solution {
public:
const int MOD = 1e9 + 7;
vector<int> adj[100005];  // Adjacency list
int parent[100005];
int maxDepth = 0;
int deepestNode = 1;
int dp[100005][2]; 

// Step 1: DFS to find deepest node from root (node 1)
void dfs(int node, int par, int depth) {
    if (depth > maxDepth) {
        maxDepth = depth;
        deepestNode = node;
    }
    parent[node] = par;
    for (int neighbor : adj[node]) {
        if (neighbor != par) {
            dfs(neighbor, node, depth + 1);
        }
    }
}

int countWays(int index, int parity, int len) {
    if (index == len) return (parity == 1);

    if (dp[index][parity] != -1) return dp[index][parity];

    int ways = 0;
    // Try weight 1 → changes parity
    ways += countWays(index + 1, 1 - parity, len);
    // Try weight 2 → keeps parity same
    ways += countWays(index + 1, parity, len);

    return dp[index][parity] = ways % MOD;
}
    int assignEdgeWeights(vector<vector<int>>& edges) {
        for (auto& edge : edges) {
        int u = edge[0], v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int n=edges.size();
//  deepest node from root
    dfs(1, -1, 0);
// path
    vector<int> path;
    int curr = deepestNode;
    while (curr != 1) {
        path.push_back(curr);
        curr = parent[curr];
    }
    path.push_back(1);
    reverse(path.begin(), path.end());

    int x = path.size() - 1; // number of edges in the path
// assign
    memset(dp,-1,sizeof(dp));
    return countWays(0, 0, x);
    }
};