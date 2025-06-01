class Solution {
public:
unordered_map<string, bool> dp;
    bool solve(vector<int>& nums, int i, long long prod1, long long prod2, int cnt1, int cnt2, long long target) {
    if (i == nums.size()) {
        return cnt1 > 0 && cnt2 > 0 && prod1 == target && prod2 == target;
    }

    string key = to_string(i) + "#" + to_string(prod1) + "#" + to_string(cnt1);
    if (dp.count(key)) return dp[key];

    bool res = false;

    // Try putting in subset 1
    if (prod1 <= target / nums[i]) {
        res |= solve(nums, i + 1, prod1 * nums[i], prod2, cnt1 + 1, cnt2, target);
    }

    // Try putting in subset 2
    if (prod2 <= target / nums[i]) {
        res |= solve(nums, i + 1, prod1, prod2 * nums[i], cnt1, cnt2 + 1, target);
    }

    return dp[key] = res;
}
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        dp.clear();
    return solve(nums, 0, 1LL, 1LL, 0, 0, target);
    }
};