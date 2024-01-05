class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    vector<int>v;
        int n=nums.size();
      for(int i=0;i<n;i++){
          auto it= lower_bound(begin(v),end(v),nums[i]);
          if(it==end(v)){v.push_back(nums[i]);}
          else{
              *it=nums[i];
          }
      }
        return v.size();
    }
};