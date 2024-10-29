class Solution {
public:
int f(vector<vector<int>>&grid,vector<vector<int>>&dp,int i,int j){
     int m=grid.size();int n=grid[0].size();
       if(i>=m||i<0 || j>=n||j<0)return 0;
       if(dp[i][j]!=-1)return dp[i][j];
       int maxi=0;
       int dir[3]={-1,0,1};
       int dic[3]={1,1,1};
       for(int k=0;k<3;k++){
        int ni=i+dir[k];int nj=j+dic[k];
        if(ni>=0 and ni<m and nj>=0 and nj<n and grid[ni][nj]>grid[i][j]){
            maxi= max(maxi,1+f(grid,dp,ni,nj));
        }
       }
       return dp[i][j]=maxi;

}
    int maxMoves(vector<vector<int>>& grid) {
        int maxi=0;
           int m=grid.size();int n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
     
        for(int i=0;i<m;i++){
            maxi= max(maxi,f(grid,dp,i,0));
        }
        return maxi;
    }
};