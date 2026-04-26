class Solution {
public:
    bool dfs(int i,int j,int pi,int pj,vector<vector<bool>>&vis,vector<vector<char>>&grid,int dr[], int dc[], int m,int n){
        vis[i][j]=1;
        for(int k=0;k<4;k++){
            int ni = i +dr[k]; int nj = j +dc[k];
            if(ni <0 || ni >=m || nj <0 || nj >=n){continue;}
            if(grid[ni][nj]!= grid[i][j])continue;
            if(ni ==pi && nj ==pj){continue;}
            if(vis[ni][nj])return true;
            if(dfs(ni,nj,i,j,vis,grid,dr,dc,m,n))return true;
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int m = grid.size(); int n = grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,0));
        int dr[4]={-1,0,1,0};
        int dc[4]= {0,1,0,-1};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0){
                    if(dfs(i,j,-1,-1,vis,grid,dr,dc,m,n))return true;
                }
            }
        }
        return false;
    }
};