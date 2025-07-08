class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0; int n=nums.size();
        int h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]==target)return m;
            else if(nums[l]<=nums[m]){
                if(nums[l]<=target and target<=nums[m]){h=m-1;}
                else{l=m+1;}
            }
            else{
                if(nums[m]<=target and nums[h]>=target){l=m+1;}
                else{h=m-1;}
            }
        }
        return -1;
    }
};