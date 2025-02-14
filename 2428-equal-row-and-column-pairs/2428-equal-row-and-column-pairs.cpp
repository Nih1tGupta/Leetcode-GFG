class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        // brute check each row with each col
        int ct=0;int n=grid.size();
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                bool flag=1;
                for(int i=0;i<n;i++){
                    if(grid[r][i]!=grid[i][c]){
                        flag=0;break;
                    }
                }
                if(flag)ct++;
            }
        }
       return ct;
    }
};