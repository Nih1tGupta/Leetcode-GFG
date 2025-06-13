class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;int h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]==target)return 1;
            if(nums[l]==nums[m] and nums[m]==nums[h]){l++;h--;continue;}
            if(nums[l]<=nums[m]){
                if(nums[l]<=target and target <=nums[m]){
                    h=m-1;
                }
                else{
                    l=m+1;
                }
            }
            else if(nums[m]<=nums[h]){
                if(nums[m]<=target and target <=nums[h]){
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
        }
        return 0;
    }
};