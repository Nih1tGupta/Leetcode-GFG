class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int maxi=1;int k=0;
        int r=0;int l=0;
        while(r<nums.size()){
            // shrink
            while(nums[r]&k){
                k^=nums[l];
                l++;
            }
            k|=nums[r];
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};