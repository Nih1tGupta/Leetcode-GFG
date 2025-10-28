class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
          int n=grid.size();int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        // q.push( {{0,0},0});
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                  q.push( {{i,j},0});
                  vis[i][j]=1;
                }
            }
        }
        // int steps=0;
        int dir[]={-1,0,1,0};
        int dic[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int steps=q.front().second;
            q.pop();
            dis[row][col]=steps;
            for(int i=0;i<4;i++){
                int nr=row+dir[i];
                int nc=col+dic[i];
                if(nr>=0 and nr<n and nc>=0 and nc<m and !vis[nr][nc]){
                    vis[nr][nc]=1;q.push({{nr,nc},steps+1});
                }
            }
        }
        return dis;
    }
};