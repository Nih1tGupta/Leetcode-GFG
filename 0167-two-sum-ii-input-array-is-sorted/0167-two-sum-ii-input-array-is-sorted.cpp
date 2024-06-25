class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int i=0,j=nums.size()-1;
        // while(i<j){
        //     int sum = nums[i] + nums[j];
        //     if(sum==target) return {i+1,j+1};
        //     else if(sum>target) j--;
        //     else i++;
        // }
        // return {};
         for(int i=0;i<nums.size()-1;i++){
            int low=i+1,high=nums.size()-1;
            int k=target-nums[i];
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]==k)     return{i+1,mid+1};
                else if(nums[mid]<k)    low=mid+1;
                else    high=mid-1;
            }
        }
        return {};
    
    }
};