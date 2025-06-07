class Solution {
public:
   int solve(int ind , int prev_ind ,vector<int>&nums,int n , vector<vector<int>>&dp){
        if(ind == n){return 0;}
        if(dp[ind][prev_ind+1] != -1){return dp[ind][prev_ind + 1];}
        int len = 0 + solve(ind+1,prev_ind,nums,n,dp);  //not including case
        if(prev_ind == -1 || nums[ind] > nums[prev_ind])  //including case 
        {len = max(len , 1 + solve(ind+1,ind,nums,n,dp));}
        return dp[ind][prev_ind+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(0,-1,nums,n,dp);


        // vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        // for(int ind=n-1;ind>=0;ind--){
        //     for(int pre=ind-1;pre>=-1;pre--){
        //          int len = 0 + dp[ind+1][pre+1];  //not including case
        // if(pre == -1 || nums[ind] > nums[pre])  //including case 
        // {len = max(len , 1 + dp[ind+1][ind+1]);}
        //  dp[ind][pre+1] = len;
        //     }
        // }
        // return dp[0][0];

    //     vector<int>dp(n,1);
    // vector<int>hash(n);
    // int lastidx=0;
    // //     int maxi=1;
    // //     for(int i=0;i<n;i++){
    //     hash[i]=i;
    // //         for(int prev=0;prev<i;prev++){
    // //             if(nums[i]>nums[prev]){
    //     if(1+dp[prev]>dp[i]){
    //         hash[i]=prev;
    //     dp[i]= max(dp[i],1+dp[prev]);
    //     }
    //     }
    // //         }
    //          if(maxi<dp[i]){
    //             maxi=dp[i];
    //             lastidx=i;
    //          }

    // //     }
    // // return maxi;
    // while(hash[lastidx]!=lastidx){
    //     lastidx=hash[lastidx];
    //     v.push_back(nums[lastidx]);
    // }
    // // return v;
    // return maxi;
    }
};