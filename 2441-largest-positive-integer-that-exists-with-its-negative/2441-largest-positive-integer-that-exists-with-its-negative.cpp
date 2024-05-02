class Solution {
public:
    int findMaxK(vector<int>& nums) {
       int i=0,j=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j){
            int diff=nums[i]+nums[j];
            if(diff>0) j--;
            else if(diff<0) i++;
            else return nums[j];
        }
        return -1;
    }
};
// -7 -1 1 6 7 10