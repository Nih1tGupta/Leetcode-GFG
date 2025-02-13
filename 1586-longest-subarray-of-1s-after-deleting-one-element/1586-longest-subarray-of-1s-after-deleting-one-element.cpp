class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=1;
          int i=0;int j=0;int n=nums.size();
        int zc=0;int maxi=0;
        while(j<n){
            if(nums[j]==0){zc++;}
            if(zc>k){
                if(nums[i]==0){zc--;}
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi-1;
    }
};