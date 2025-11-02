class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long K_pos = 100000LL;
        long long K_neg = -100000LL;
        long long n0 = nums[0];  long long n1 = nums[1];
        long long n_1 = nums[n - 1];   long long n_2 = nums[n - 2];
        long long max_prod_2 = max(n0 * n1, n_1 * n_2);
        long long ans1 = max_prod_2 * K_pos;
        long long min_prod_2 = n0 * n_1;
        long long ans2 = min_prod_2 * K_neg;

        // The final answer is the maximum of these two scenarios
        return max(ans1, ans2);
    }
};