class Solution {
public:
    long long maximumTotalCost(vector<int>& nums) {
        long long  n=nums.size();
         vector<long long>dp(n+1,0);
        dp[1]=nums[0];
        for(long long  i=1;i<nums.size();i++){
            long long  op1= dp[i]+nums[i];
            long long  op2= dp[i-1]+ (nums[i-1]+ (-1*nums[i]));
            dp[i+1]= max(op1,op2);
        }
        return dp[n];
    }
};