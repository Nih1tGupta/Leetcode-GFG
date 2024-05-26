class Solution {
public:
    int count=0;
     void calculate(vector<int>& nums, int i, int sum, int S) {
        if (i == nums.size()) {
            if (sum == S) {
                count++;
            }
        } else {
            calculate(nums, i + 1, sum + nums[i], S);
            calculate(nums, i + 1, sum - nums[i], S);
        }
    }
    int findTargetSumWays(vector<int>& nums, int target) {
          calculate(nums, 0, 0, target);
        return count;
    }
};