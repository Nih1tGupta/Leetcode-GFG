class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int s=nums[0];int maxi=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){s+=nums[i];}
            else{s=nums[i];}
            maxi=max(maxi,s);
        }
        return maxi;
    }
};