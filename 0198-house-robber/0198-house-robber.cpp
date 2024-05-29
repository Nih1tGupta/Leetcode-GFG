class Solution {
public:
    int dp[101];
    int solve(int i,vector<int>&nums,   vector<int>&dp){
        int n=nums.size();
        if(i==0){return nums[0];}
        if(i<0){return 0;}
        if(dp[i]!=-1){return dp[i];}
        int p=nums[i]+solve(i-2,nums,dp);
        int np=solve(i-1,nums,dp);
        return dp[i]=max(p,np);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return solve(n-1,nums,dp);
    }
};