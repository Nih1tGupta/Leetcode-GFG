class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
         long long ans=0;int n=nums.size();
        int maxi= max(nums[1],nums[0]);
        int maxDiff= (nums[0]-nums[1]);
        for(int k=2;k<n;k++){
            long long val = (long long ) maxDiff* nums[k];
            if(val>ans){ans=val;}
            maxDiff= max(maxDiff,maxi-nums[k]);
            maxi= max(maxi,nums[k]);
        }
        return ans;
    }
};