class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
            if(i-k<0 and i+k>=n ){s+=nums[i];}
            else if(i-k<0 and i+k<=n and nums[i]>nums[i+k]){s+=nums[i];}
              else if(i-k>=0 and i+k>=n and nums[i]>nums[i-k]){s+=nums[i];}
              else if( i-k>=0 and i+k< n and nums[i]>nums[i-k] and nums[i]>nums[i+k]){s+=nums[i];}
        }
        return s;
    }
};