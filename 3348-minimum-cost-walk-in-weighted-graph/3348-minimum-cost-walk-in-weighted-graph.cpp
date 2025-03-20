class Solution {
public:
    class DisjointSet {
public:
        vector<int> rank, parent,ands;
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
        ands.resize(n+1,INT_MAX);
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v,int wt) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        ands[ulp_u] = ands[ulp_u] & wt;
        
        ands[ulp_v] = ands[ulp_v] & wt;
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            ands[ulp_v] = (ands[ulp_u] & ands[ulp_v] & wt);
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            ands[ulp_u] = (ands[ulp_u] & ands[ulp_v] & wt);
            parent[ulp_v] = ulp_u;
        }
        else {
            ands[ulp_u] = (ands[ulp_u] & ands[ulp_v] & wt);
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        vector<int>ans;
        DisjointSet ds(n);
        for(auto it:edges){
            ds.unionByRank(it[0],it[1],it[2]);
        }
        for(auto it:query){
            int p1 = ds.findUPar(it[0]);
            int p2 = ds.findUPar(it[1]);
            if(it[0] == it[1]){
                ans.push_back(0);
            }
            else if(p1 == p2){
                int val = ds.ands[p1];
                if(val ==INT_MAX)   val = 0;
                ans.push_back(val); 
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};