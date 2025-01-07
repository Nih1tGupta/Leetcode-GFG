class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        int n = nums.size();
        // Sort the arrat to make the task of making similar elements distinct.
        sort(nums.begin(), nums.end());
        // Make the array start from minimum possible element
        nums[0] -= k;
        int i = 1;
        while(i<n){
            int curr = nums[i];
            int f = max(curr-k, nums[i-1]+1);
            // Always try to make smallest possible value greater that previous one.
            while(i<n && nums[i]==curr){
                nums[i] = min(f, curr+k);
                f++;
                i++;
            }
        }
        map<int,int>mp;
        for(auto i:nums) mp[i]++;
        return mp.size();
    }
};