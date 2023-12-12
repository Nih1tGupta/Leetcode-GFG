class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        long long pro=1;
        pro=(nums[n-1]-1)*(nums[n-2]-1);
        return pro;
    }
};