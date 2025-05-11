class Solution {
public:
    bool solve(vector<vector<int>>&grid){
        int m=grid.size();
         vector<int>v(m,0);
         int n=grid[0].size();
        for(int i=0;i<m;i++){
            long long sum=0;
            for(int j=0;j<n;j++){
                sum+=grid[i][j];
            }
            v[i]=sum;
        }
        // v[i]={5 10}
        long long  ts=0;
        for(int i=0;i<m;i++){
            ts+=v[i];
        }
        long long cs=0;
        
        for(int i=0;i<m;i++){
            cs+=v[i];
            ts-=v[i];
            if(cs==ts)return 1;
        }
        return 0;
    }
    bool canPartitionGrid(vector<vector<int>>& grid) {
        if(solve(grid)==1)return 1;
        vector<vector<int>> res;
        for(int i=0;i<grid[0].size();i++){
            vector<int> v;
            for(int j=0;j<grid.size();j++) {
                v.push_back(grid[j][i]);
            }
            res.push_back(v);
        }
        if(solve(res)==1)return 1;
        return 0;
    }
};