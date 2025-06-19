class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        // 1 2 3 5 6
        int ct=0;int i=0; int n=nums.size();
        sort(nums.begin(),nums.end());
        while(i<n){
            int st=nums[i];
            while(i<n and nums[i]-st<=k){i++;}
            ct++;
        }
        return ct;
    }
};