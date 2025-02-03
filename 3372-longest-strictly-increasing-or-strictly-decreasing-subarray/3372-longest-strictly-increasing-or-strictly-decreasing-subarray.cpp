class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi1=0;int c=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){c++;maxi1=max(maxi1,c);}
            else{c=0;}
        }
        int c2=0;int maxi2=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){c2++;maxi2=max(maxi2,c2);}
            else{c2=0;}
        }
        return max(maxi1,maxi2)+1;
    }
};