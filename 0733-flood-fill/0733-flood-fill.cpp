class Solution {
public:
void dfs(vector<vector<int>>& image, int sr, int sc, int color,int initial,int dr[],int dc[],vector<vector<int>>&vis)
{
    vis[sr][sc]=color;
    int m=image.size();int n=image[0].size();
    for(int i=0;i<4;i++){
        int nr=sr+dr[i]; int nc= sc+dc[i];
        if(nr>=0 and nr<m and nc>=0 and nc<n and image[nr][nc]==initial and vis[nr][nc]!=color){
            dfs(image,nr,nc,color,initial,dr,dc,vis);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>vis=image;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        int initial=image[sr][sc];
        dfs(image,sr,sc,color,initial,dr,dc,vis);
        return vis;
    }
};