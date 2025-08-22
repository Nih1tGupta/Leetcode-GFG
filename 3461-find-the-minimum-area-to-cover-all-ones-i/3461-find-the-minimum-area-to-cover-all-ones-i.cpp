class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size();int m=grid[0].size();
        int t=n;int l=m;int r=-1;int b=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    t=min(t,i); b=max(b,i); l=min(l,j); r=max(r,j);
                }
            }
        }
        int a1= (r-l)+1;
        int a2=(b-t)+1;
        return a1*a2;
    }
};