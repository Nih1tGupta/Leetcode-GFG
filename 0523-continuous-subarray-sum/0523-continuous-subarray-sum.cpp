class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = -1;
        long long  sum = 0;
        for(int i = 0; i<n; i++) {
            sum += nums[i];
            int j = sum%k;
            if(mp.find(j) != mp.end()) {
                if(i - mp[j] >= 2)
                   return true; 
            } else {
                mp[j] = i;
            }
        }
        return false;
    }
};