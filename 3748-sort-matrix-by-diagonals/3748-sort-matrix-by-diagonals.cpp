class Solution {
public:
    void sortDesc(int r,int c,vector<vector<int>>&grid){
         int row=r;int col=c;
        vector<int>v;int n=grid.size();
        while(row<n and col<n){v.push_back(grid[row++][col++]);}
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int i=0;
        while(r<n and c<n){grid[r++][c++]=v[i++];}
    }
    void sortAsc(int r,int c,vector<vector<int>>&grid){
        int row=r;int col=c;
        vector<int>v;int n=grid.size();
        while(row<n and col<n){v.push_back(grid[row++][col++]);}
        sort(v.begin(),v.end());
        int i=0;
        while(r<n and c<n){grid[r++][c++]=v[i++];}
    }
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        // bottom left -->col will always be 0
        // decreasing order me karna hai
       
         // top right -->row will always be 0
        // incr. order me karna hai
        for(int col=0;col<n;col++){
            sortAsc(0,col,grid);
        }
         for(int row=0;row<n;row++){
            sortDesc(row,0,grid);
        }
    return grid;
    }
};