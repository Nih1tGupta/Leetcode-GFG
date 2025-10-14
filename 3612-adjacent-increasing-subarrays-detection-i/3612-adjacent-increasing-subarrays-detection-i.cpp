class Solution {
public:

    bool f(const std::vector<int>& nums, int start, int k) {
    for (int i = start; i < start + k - 1; ++i) {
        if (nums[i] >= nums[i + 1]) {
            return false;
        }
    }
    return true;
}
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
         int n = nums.size();
    for (int i = 0; i <= n - 2 * k; ++i) {
        bool a = f(nums, i, k);
        if (a) {
            bool b = f(nums, i + k, k);
            if (b) {
                return true;
            }
        }
    }
    return false;

    }
};