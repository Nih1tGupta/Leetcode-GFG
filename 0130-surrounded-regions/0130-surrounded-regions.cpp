class Solution {
public:
void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&b,vector<int>dr,vector<int>dc){
    vis[r][c]=1;
    int n=b.size(); int m=b[0].size();
    for(int i=0;i<4;i++){
        int nr=r+dr[i]; int nc= c+dc[i];
        if(nr>=0 and nr<n and nc>=0 and nc<m and !vis[nr][nc] and b[nr][nc]=='O'){
            dfs(nr,nc,vis,b,dr,dc);
        }
    }
}
    void solve(vector<vector<char>>&b) {
        int n=b.size();int m=b[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<int>dr = {-1, 0, +1, 0};
        vector<int>dc = {0, 1, 0, -1}; 
       for(int j=0;j<m;j++){
        if(vis[0][j]==0 and b[0][j]=='O'){
                dfs(0,j,vis,b,dr,dc);
        }
        if(vis[n-1][j]==0 and b[n-1][j]=='O'){
            dfs(n-1,j,vis,b,dr,dc);
        }
       }
       for(int i=0;i<n;i++){
             if(vis[i][0]==0 and b[i][0]=='O'){
                dfs(i,0,vis,b,dr,dc);
        }
        if(vis[i][m-1]==0 and b[i][m-1]=='O'){
                dfs(i,m-1,vis,b,dr,dc);
        }
       }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] and b[i][j]=='O'){b[i][j]='X';}
        }
       }
        
    }
};