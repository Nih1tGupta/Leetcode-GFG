class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
       vector<int>v;int m=grid.size();int n=grid[0].size();
       bool d=true;
       for(int i=0;i<m;i++){
        if(d){
        for(int j=0;j<n;j++){
            if ((i+j)%2==0)v.push_back(grid[i][j]);
        }
        }
        else{
             for(int j=n-1;j>=0;j--){
            if ((i+j)%2==0)v.push_back(grid[i][j]);
        }
        }
        d=!d;
       }
        return v;
    }
};