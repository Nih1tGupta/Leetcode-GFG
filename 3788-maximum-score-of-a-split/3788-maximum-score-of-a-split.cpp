class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        vector<int> suffixMin(n);
        suffixMin[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--) {
            suffixMin[i] = min(nums[i], suffixMin[i+1]);
        }
        long long prefixSum = 0;
        long long ans = LLONG_MIN;

        // valid split indices: 0 to n-2
        for(int i = 0; i < n-1; i++) {
            prefixSum += nums[i];
            ans = max(ans, prefixSum - suffixMin[i+1]);
        }

        return ans;
    }
};