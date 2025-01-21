class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long ans= LONG_LONG_MAX;
        long long fr_sum=accumulate(grid[0].begin(),grid[0].end(),0LL);
        long long sr_sum=0;
        for(int i=0;i<grid[0].size();i++){
            fr_sum-=grid[0][i];
            long long r2_gain=max(fr_sum,sr_sum);
            ans=min(ans,r2_gain);
            sr_sum+=grid[1][i];
        }
        return ans;
    }
};