class Solution {
public:
    int solve(vector<int>&v,int idx,int xorr){
        if(idx>=v.size()){return xorr;}
        int take=solve(v,idx+1,xorr^v[idx]);
        int nottake=solve(v,idx+1,xorr);
        return take+nottake;
    }
    int subsetXORSum(vector<int>& nums) {
        return solve(nums,0,0);
    }
};