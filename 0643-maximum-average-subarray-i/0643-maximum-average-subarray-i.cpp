class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double s=0;
        for(int i=0;i<k;i++){
            s+=nums[i];
        }
        double ans=s;
        for(int i=k;i<nums.size();i++){
            s+=nums[i];
            s-=nums[i-k];
            ans=max(ans,s);
        }
        return ans/k;
    }
};