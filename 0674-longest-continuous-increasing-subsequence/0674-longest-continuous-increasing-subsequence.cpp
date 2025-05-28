class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ct=1;int maxi=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                ct++;
                maxi=max(maxi,ct);
            }
            else{
            
                ct=1;
            }
        }
    return maxi;
    }
};