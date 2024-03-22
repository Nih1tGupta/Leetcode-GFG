class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int mini=0;
        sort(nums.begin(),nums.end());
        int i=0;int j=nums.size()-1;
        while(i<j){
            int sum= nums[j]+nums[i];
            mini = max(mini,sum);
            i++;j--;sum=0;
        }
        return mini;
    }
};