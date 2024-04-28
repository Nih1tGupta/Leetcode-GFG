class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        int ans=INT_MAX;
        sort(nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
      for(int i=0;i<nums1.size();i++){
          for(int j=i+1;j<nums1.size();j++){
              vector<int>v;
              for(int k=0;k<nums1.size();k++){
                  if(k==i  or k==j){continue;}
                  v.push_back(nums1[k]);
              }
              
              int mila=1;
              int diff= nums2[0]-v[0];
              for(int k=1;k<v.size();k++){if(nums2[k]-v[k]!=diff){mila=0;}}
          if(mila!=0){ans=min(ans,diff);}
          }
      }
          return ans;
    }
};