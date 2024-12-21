class Solution {
public:
   static const int MOD=1e9+7;
    int f(int i,int j,int curr,vector<vector<int>>&g,int k,vector<vector<vector<int>>>&dp){
        if(i<0||j<0||i>=g.size()|| j>=g[0].size()){return 0;}
        if(dp[i][j][curr]!=-1){return dp[i][j][curr];}
        if(i==g.size()-1 and j==g[0].size()-1){
            return (curr==k)?1:0;
        }
        int c=0;
        if(j+1<g[0].size()){
            c=(c+f(i,j+1,curr^g[i][j+1],g,k,dp))%MOD;
        }
          if(i+1<g.size()){
            c=(c+f(i+1,j,curr^g[i+1][j],g,k,dp))%MOD;
        }
        dp[i][j][curr]=c;
        return c;
    }
    int countPathsWithXorValue(vector<vector<int>>& grid, int k) {
        int m=grid.size();int n=grid[0].size();
           vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(16, -1)));
     return f(0,0,grid[0][0],grid,k,dp);
    }
};