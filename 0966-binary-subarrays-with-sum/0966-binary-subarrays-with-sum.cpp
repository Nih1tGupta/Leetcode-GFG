class Solution {
public:
    int solve(vector<int>&nums,int goal){
        if(goal<0)return 0;
         int n=nums.size();int sum=0;
        int l=0;int r=0;int c=0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal){sum-=nums[l];l++;}
            c+=(r-l+1);
            r++;
        }
        return c;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return solve(nums,goal)-solve(nums,goal-1);
    }
};