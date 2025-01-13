class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(); int n=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0|j==0||i==m-1||j==n-1){
                if(grid[i][j]==1){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
            }
        }
        int dr[4]={-1,0,1,0};
        int dc[4]={0,-1,0,1};
    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nr=row+dr[i]; int nc=col+dc[i];
            if(nr>=0 and nr<m and nc>=0 and nc<n and vis[nr][nc]==0 and grid[nr][nc]==1){
                vis[nr][nc]=1;
                q.push({nr,nc});
            }
        }
    }
    int c=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1 and vis[i][j]==0){c++;}
        }
    }
    return c;
    }
};