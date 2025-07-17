class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
         int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(k, 1)); // dp[i][mod] = max length ending at i with mod

    int maxLen = 1;

    for (int i = 0; i < n; ++i) {
        // For all j < i, try extending the subsequence ending at j
        for (int j = 0; j < i; ++j) {
            int mod = (nums[i] + nums[j]) % k;
            dp[i][mod] = max(dp[i][mod], dp[j][mod] + 1);
            maxLen = max(maxLen, dp[i][mod]);
        }
    }

    return maxLen;
    }
};