class Solution {
public:
  int dp[21][2001]; 
    int f(int i, vector<int>& nums, int t, int curr) {
        if (i == 0) {
    if (nums[0] == 0) {
        // If the first element is 0, both +0 and -0 lead to the same target
        return t == curr ? 2 : 0;
    }
    // Check if either +nums[0] or -nums[0] can satisfy the target
    return (t == curr + nums[0]) + (t == curr - nums[0]);
}
        if (dp[i][curr + 1000] != -1) return dp[i][curr + 1000];
        int add = f(i - 1, nums, t, curr + nums[i]);
        int subtract = f(i - 1, nums, t, curr - nums[i]);
        
        return dp[i][curr + 1000] = add + subtract;
    }
    int findTargetSumWays(vector<int>& nums, int t) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return f(n-1,nums,t,0);
    }
};