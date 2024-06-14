class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
       
         sort(nums.begin(),nums.end());
        int n=nums.size();
       int maxi=nums[n-1];
      
         vector<int>v(n+maxi,0);
        for(auto &it:nums){v[it]++;}
       int moves=0;
        for(int i=0;i<n+maxi;i++){
            if(v[i]<=1){continue;}
            else{
                int extra=v[i]-1;
                v[i+1]+=extra;
                v[i]=1;
                moves+=extra;
            }
        }
        return moves;
    }
};