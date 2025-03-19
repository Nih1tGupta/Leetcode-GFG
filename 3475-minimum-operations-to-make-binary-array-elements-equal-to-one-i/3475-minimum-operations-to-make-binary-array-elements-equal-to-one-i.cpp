class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c=0;int n=nums.size();
        for(int i = 0; i <=n - 3; ++i) {
        if (nums[i] == 0) {
            nums[i] = 1 - nums[i]; nums[i+1] = 1 - nums[i+1];nums[i+2] = 1 - nums[i+2];
            c++;
        }
    }
        bool flag=0;
        for(auto it:nums){
            if(it==0){flag=1;break;}
        }
        if(flag==1)return -1;
        return c;
    }
};