class Solution {
public:
    vector<int>solve(int row){
        vector<int>v;
        long long ans=1;
        v.push_back(1);
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans/=col;
            v.push_back(ans);
        }
        return v;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int i=1;i<=numRows;i++){
            v.push_back(solve(i));
        }
        return v;
    }
};