class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxi=0;int n=nums.size();
        int l=0;long long csum=0;
        for(int r=0;r<n;r++){
             long long target=nums[r];
            csum+=nums[r];
            long long  ops= (r-l+1)*target-csum;
            if(ops>k){
                csum-=nums[l];l++;
            }
            maxi = max(maxi,r-l+1);
        }
        return maxi;
    }
};