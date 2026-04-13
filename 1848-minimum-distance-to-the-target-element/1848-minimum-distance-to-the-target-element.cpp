class Solution {
public:
    int getMinDistance(vector<int>& nums, int t, int s) {
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==t){
                mini = min( mini, abs(i-s));
            }
        }
        return mini;
    }
};