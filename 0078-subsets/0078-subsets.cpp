class Solution {
public:
    vector<int>v;
    void solve(vector<int>&nums,vector<vector<int>>&vv,vector<int>&v,int idx){
        if(idx==nums.size()){vv.push_back(v);return ;}
          v.push_back(nums[idx]);
        solve(nums,vv,v,idx+1);
        v.pop_back();
        solve(nums,vv,v,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vv;
        solve(nums,vv,v,0);
        return vv;
    }
};