class Solution {
public:
    // int solve(int idx,vector<int>&nums,int mini){
    //     if(idx>=nums.size()-1)return 0;
    //     for(int i=1;i<=nums[idx];i++){
    //         mini= min(mini,solve(idx+i,nums,mini)+1);
    //     }
    //     return mini;
    // }
    int jump(vector<int>& nums) {
        // return solve(0,nums,10001);
        int j=0;int l=0;int r=0;
        while(r<nums.size()-1){
            int far=0;
            for(int i=l;i<=r;i++){
                far=max(far,i+nums[i]);
            }
           l=r+1; r=far;j++;
        }
        return j;
    }
};