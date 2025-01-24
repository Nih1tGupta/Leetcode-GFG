class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& g) {
        int n=g.size(); int m=g[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
         vector<vector<int>>ans(n ,vector<int>(m,0));
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        queue<pair<int,pair<int,int>>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==1){
                    vis[i][j]=1;
                    q.push({0,{i,j}});
                }
            }
        }
while(!q.empty()){
pair<int,pair<int,int>>p=q.front();
int r=p.second.first;
int c=p.second.second;
int h=p.first;
q.pop();
for(int i=0;i<4;i++){
    int nr=r+dr[i]; int nc=c+dc[i];
    if(nr>=0 and nr<n and nc>=0 and nc<m and vis[nr][nc]==0){
        ans[nr][nc]=h+1;
        vis[nr][nc]=1;
        q.push({h+1,{nr,nc}});
    }
}
}
return ans;
    }
};