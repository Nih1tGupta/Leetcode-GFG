class Solution {
public:
    int bfs(int i,int j,vector<vector<int>>& grid,vector<vector<bool>>&vis){
        
        int mi=0;
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
       int dr[4]={0,0,1,-1};  
       int dc[4]={1,-1,0,0};
        q.push({i,j});
        vis[i][j]=1;
      
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
           q.pop();
           mi+=grid[r][c];
            for(int i=0;i<4;i++){
                int nr=r+dr[i]; int nc=c+dc[i];
                if(nr>=0 and nr<m and nc>=0 and nc<n and !vis[nr][nc] and grid[nr][nc]>0){
                    // mi=max(mi,sum+grid[nr][nc]);
                    q.push({nr,nc});
                    vis[nr][nc]=true;
                }
            }
        }
        return mi;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int maxi=0;
        vector<vector<bool>>vis(m,vector<bool>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]>0 and !vis[i][j]){
                    maxi=max(maxi,bfs(i,j,grid,vis));
                }
            }
        }
        return maxi;
    }
};