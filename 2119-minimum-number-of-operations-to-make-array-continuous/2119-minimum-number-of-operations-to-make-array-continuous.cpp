class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        set<int> s(nums.begin(), nums.end());
        vector<int> ans;
        int mini = n;
        for (int num : s) {
            ans.push_back(num);
        }
        int j = 0;
        for (int i = 0; i < ans.size(); i++) {
            while (j < ans.size() && ans[j] < ans[i] + n) {
                j++;
            }
            int count = j - i;
            mini= min(mini, n - count);
        }
        return mini;
    }
};