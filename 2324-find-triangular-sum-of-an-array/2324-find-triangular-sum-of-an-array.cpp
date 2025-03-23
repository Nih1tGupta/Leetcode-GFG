class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size()+i;i++){
            vector<int>temp;
            for(int j=1;j<nums.size();j++){
                temp.push_back((nums[j-1]+nums[j])%10);
            }
            nums=temp;
        }
        return nums[0];
    }
};