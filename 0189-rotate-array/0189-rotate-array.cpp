class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         k=k%nums.size();
         int a=(nums.size()-k);
        reverse(nums.begin(),nums.begin()+a);
        reverse(nums.begin()+a,nums.end());
        reverse(nums.begin(),nums.end());
    }
};