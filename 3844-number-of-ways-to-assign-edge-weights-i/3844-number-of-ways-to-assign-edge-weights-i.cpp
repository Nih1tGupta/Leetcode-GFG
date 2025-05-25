class Solution {
public:
const int MOD = 1e9 + 7;

// DFS FOR MAX HEIGHT
void dfs(int node, int parent, int depth, vector<vector<int>>& adj,
         vector<int>& parentMap, int& maxDepth, int& deepestNode) {
    parentMap[node] = parent;
    if (depth > maxDepth) {
        maxDepth = depth;
        deepestNode = node;
    }
    for (int neighbor : adj[node]) {
        if (neighbor != parent) {
            dfs(neighbor, node, depth + 1, adj, parentMap, maxDepth, deepestNode);
        }
    }
}

// WAYS TO ASSIGN-  GPT
int countWays(int index, int parity, int len, vector<vector<int>>& dp) {
    if (index == len) return (parity == 1);
    if (dp[index][parity] != -1) return dp[index][parity];

    int ways = 0;
    ways = (ways + countWays(index + 1, 1 - parity, len, dp)) % MOD;
    ways = (ways + countWays(index + 1, parity, len, dp)) % MOD;
    return dp[index][parity] = ways;
}
    int assignEdgeWeights(vector<vector<int>>& edges) {
         int n = edges.size() + 1; // Number of nodes
    vector<vector<int>> adj(n + 1);
    for (auto& edge : edges) {
        int u = edge[0], v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> parentMap(n+1, 0);
    int maxDepth = 0, deepestNode = 1;

    // STEP 1 
    dfs(1, -1, 0, adj, parentMap, maxDepth, deepestNode);

    // STEP 2- PATH
    vector<int> path;
    int current = deepestNode;
    while (current != -1) {
        path.push_back(current);
        current = parentMap[current];
    }
    reverse(path.begin(), path.end());
    int len = path.size() - 1; // number of edges in the path
    vector<vector<int>> dp(len + 1, vector<int>(2, -1));

    // STEP 3 -NO OF WAYS
    return countWays(0, 0, len, dp);
    }
};