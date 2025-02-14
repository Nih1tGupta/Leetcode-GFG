class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        // brute check each row with each col
    //     int ct=0;int n=grid.size();
    //     for(int r=0;r<n;r++){
    //         for(int c=0;c<n;c++){
    //             bool flag=1;
    //             for(int i=0;i<n;i++){
    //                 if(grid[r][i]!=grid[i][c]){
    //                     flag=0;break;
    //                 }
    //             }
    //             if(flag)ct++;
    //         }
    //     }
    //    return ct;

    // optimal->map--store row
    map<vector<int>,int>mp;
    int ct=0;int n=grid.size();
    for(int i=0;i<n;i++){
        mp[grid[i]]++;
    }
    for(int j=0;j<n;j++){
        vector<int>v;
        for(int k=0;k<n;k++){
            v.push_back(grid[k][j]);
        }
        ct+=mp[v];
    }
    return ct;
    }
};