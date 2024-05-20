class Solution {
public:
    // int  solve(vector<int>&nums,int idx,int xorr){
//         if(idx==nums.size()){return xorr ;}
       
//         int take=solve(nums,idx+1,nums[idx]^xorr);
       
//         int nottake=solve(nums,idx+1,xorr);
//         return take+nottake;
//     }
    int subsetXORSum(vector<int>& nums) {
//         return solve(nums,0,0);  
        
        int ans=0;
        for(auto &it:nums){ans|=it;}
       return ans<<(nums.size()-1);
    }
};