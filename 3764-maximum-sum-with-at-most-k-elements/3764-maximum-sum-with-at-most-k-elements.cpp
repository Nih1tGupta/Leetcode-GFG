class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        priority_queue<int>heap;
        for(int r=0;r<grid.size();r++){
            sort(grid[r].begin(),grid[r].end(),greater<int>());
            for(int c=0;c<limits[r];c++){
                heap.push(grid[r][c]);
            }
        }
        long long s=0;
        while(k--){
            s+=heap.top();
            heap.pop();
        }
    return s;
    }
};