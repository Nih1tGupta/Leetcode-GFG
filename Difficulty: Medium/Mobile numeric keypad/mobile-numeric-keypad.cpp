class Solution {
  public:
    long long dp[10][30];
    long long solve(int node,int n,vector<int>adj[]){
        if(n==1)return 1;
        if(dp[node][n]!=-1)return dp[node][n];
        long long tot=0;
        for(auto &it:adj[node]){
            tot+=solve(it,n-1,adj);
        }
        return dp[node][n]=tot;
    }
    int getCount(int n) {
        // code here
        vector<int> adj[10];
        adj[0] = {0, 8};
        adj[1] = {1, 2, 4};
        adj[2] = {1, 2, 3, 5};
        adj[3] = {2, 3, 6};
        adj[4] = {1, 4, 5, 7};
        adj[5] = {2, 4, 5, 6, 8};
        adj[6] = {3, 5, 6, 9};
        adj[7] = {4, 7, 8};
        adj[8] = {5, 7, 8, 9, 0};
        adj[9] = {6, 8, 9};
        long long ans = 0;
        memset(dp, -1, sizeof dp);
        for(int i=0;i<10;i++){
            ans+=solve(i,n,adj);
        }
        return ans;
    }
};