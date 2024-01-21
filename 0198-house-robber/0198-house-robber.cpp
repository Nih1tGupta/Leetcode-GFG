class Solution {
public:
    int rob(vector<int>& nums) {
           int sum1 = nums[0];
    int sum2 = 0;
    int result;
    for (int i = 1; i < nums.size(); i++){
        result = (sum1 > sum2) ? sum1 : sum2;
        sum1 = sum2 + nums[i];
        sum2 = result;
    }
    return ((sum1 > sum2) ? sum1 : sum2);
    }
};