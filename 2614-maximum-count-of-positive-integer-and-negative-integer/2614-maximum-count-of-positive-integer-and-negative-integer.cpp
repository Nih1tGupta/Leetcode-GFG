class Solution {
public:
    int lb(vector<int>&nums){
         int idx=nums.size();
        int l=0;int h=idx-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]<0){l=m+1;}
            else if(nums[m]>=0){
                h=m-1;
                idx=m;
                }
        }
        return idx;
    }
    int ub(vector<int>&nums){
         int idx=nums.size();
        int l=0;int h=idx-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]<=0){l=m+1;}
            else if(nums[m]>0){
                h=m-1;
                idx=m;
                }
        }
        return idx;
    }
    int maximumCount(vector<int>& nums) {
        // int n,p=0;
        // for(auto it:nums){
        //     if(it<0){n++;}
        //     else if(it>0){p++;}
        // }
        // return max(n,p);
        // BINARY SEARCH
       int p=nums.size()-ub(nums);
       int n=lb(nums);
       return max(n,p);
    }
};