class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>&v,vector<int>&ds,int target,int i){
        if(i==nums.size()){
            if(target==0){v.push_back(ds);}
            return;
        }
        if(nums[i]<=target){
            ds.push_back(nums[i]);
            solve(nums,v,ds,target-nums[i],i);
            ds.pop_back();
        }
        // }not take
        solve(nums,v,ds,target,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int k) {
        vector<vector<int>>v;
        vector<int>ds;
        solve(nums,v,ds,k,0);
        return v;
    }
};