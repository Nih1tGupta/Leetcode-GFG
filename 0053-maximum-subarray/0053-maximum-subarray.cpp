class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long  sum=0;long long  maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
              maxi=max(sum,maxi);
            if(sum<0){sum=0;}
         
        }
        return maxi;
    }
};