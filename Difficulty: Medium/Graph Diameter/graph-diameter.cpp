class Solution {
  public:
    pair<int, int> bfs(int src, vector<vector<int>>& adj, vector<int>& vis) {
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = 1;

    int farNode = src, maxDist = 0;

    while (!q.empty()) {
        auto [node, dist] = q.front();
        q.pop();

        if (dist > maxDist) {
            maxDist = dist;
            farNode = node;
        }

        for (int nbr : adj[node]) {
            if (!vis[nbr]) {
                vis[nbr] = 1;
                q.push({nbr, dist + 1});
            }
        }
    }
    return {farNode, maxDist};
}
    int diameter(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
    for (auto &e : edges) {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    vector<int> vis(V, 0);
    int diameter = 0;

    for (int i = 0; i < V; ++i) {
        if (!vis[i]) {
            // 1st BFS to find farthest node in this component
            pair<int, int> p1 = bfs(i, adj, vis);
            int farNode = p1.first;

            // Reset visited for this component
            vector<int> tempVis(V, 0);

            // 2nd BFS from farNode to get diameter of this component
            pair<int, int> p2 = bfs(farNode, adj, tempVis);
            int compDiam = p2.second;

            diameter = max(diameter, compDiam);
        }
    }

    return diameter;
    }
};
