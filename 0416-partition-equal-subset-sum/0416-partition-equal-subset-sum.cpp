class Solution {
public:
    bool solve(int idx,int target,vector<int>&nums,vector<vector<int>>&dp){
        if(idx==0){
            if(target==0)return 1;
            return 0;
        }
        if(dp[idx][target]!=-1)return dp[idx][target];
        bool nottake= solve(idx-1,target,nums,dp);
        bool take=false;
        if(nums[idx]<=target){
            take=solve(idx-1,target-nums[idx],nums,dp);
        }
        return dp[idx][target]=take|nottake;
    }
    bool canPartition(vector<int>& nums) {
        int ts=0;
        for(auto it:nums){ts+=it;}
        if(ts%2)return 0;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(ts,-1));
        return solve(n-1,floor(ts/2),nums,dp);

    }
};