class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int mini=1e9;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum>=target){mini=min(mini,j-i+1);break;}
            }
        }
        return mini==1e9?0:mini;
    }
};