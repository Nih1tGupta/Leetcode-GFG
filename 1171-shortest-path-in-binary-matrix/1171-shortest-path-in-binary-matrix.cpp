class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size(); int m=grid[0].size();
        vector<vector<int>>dist(n,vector<int>(m,1e7));
        if(grid[0][0]!=0 || grid[n-1][m-1]!=0)return -1;
        if(n==1 && m==1 && grid[0][0]==0)return 1;
        dist[0][0]=0;
        queue<pair<int,pair<int,int>>>q;
        q.push({1,{0,0}});
        vector<int>dr={0,1,-1,0,1,-1,1,-1};
        vector<int>dc={1,0,0,-1,1,1,-1,-1};
        while(!q.empty()){
            auto it = q.front(); q.pop();
            int dis=it.first;
            int r=it.second.first; int c=it.second.second;
            for(int i=0;i<8;i++){
                int nr=r+dr[i]; int nc=c+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && dis+1<dist[nr][nc] && grid[nr][nc]==0){
                    dist[nr][nc]=dis+1;
                    if(nr==n-1 and nc==m-1){return dis+1;}
                    q.push({dis+1,{nr,nc}});
                }
            }
        }
        return -1;
    }
};