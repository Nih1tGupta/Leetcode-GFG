class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        // if t%x !=nums[i]%x toh return -1;
        // int op= (target-nums[i])/x;
        vector<int>v;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int sz=v.size();
        int target=v[floor(sz/2)];
        int op=0;
        for(auto it:v){
            if(target%x!=it%x){return -1;}
            else{op+=abs(target-it)/x;}
        }
        return op;
    }
};