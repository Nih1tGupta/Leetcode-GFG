class Solution {
public:
    // int solve(int idx,vector<int>&nums,int a){
    //     if(idx==0){
    //         if(a%nums[idx]==0)return a/nums[idx];
    //         return INT_MAX;
    //     }
    //     int nottake= 0+solve(idx-1,nums,a);
    //     int take=INT_MAX;
    //     if(a>=nums[idx])take=1+solve(idx,nums,a-nums[idx]);
    //     return min(take,nottake);
    // }
    int coinChange(vector<int>& nums, int a) {
        int n=nums.size();
        // int x= solve(n-1,coins,a);
        // if(x==INT_MAX)return -1;
        // return x;
        vector<vector<int>>dp(n,vector<int>(a+1,0));
        for(int t=0;t<=a;t++){
            if(t%nums[0]==0){
                dp[0][t]=t/nums[0];
            }
            else{
                dp[0][t]=1e9;
            }
        }
        for(int idx=1;idx<n;idx++){
            for(int tar=0;tar<=a;tar++){
                int nt=dp[idx-1][tar];
                int take=1e9;
                if(nums[idx]<=tar){take=1+dp[idx][tar-nums[idx]];}
                dp[idx][tar]=min(nt,take);
            }
        }
        int ans=dp[n-1][a];
        if(ans>=1e9)return -1;
        return ans;
    }
};