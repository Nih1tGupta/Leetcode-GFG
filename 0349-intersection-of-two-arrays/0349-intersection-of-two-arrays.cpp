class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       map<int,int>mp;
          map<int,int>mp1;
          vector<int>ans;
          for(int i=0;i<nums1.size();i++){mp[nums1[i]]++;}
          for(int i=0;i<nums2.size();i++){
              if(mp.find(nums2[i])!=mp.end())
               mp1[nums2[i]]++;
          }

          for(auto it:mp1)
          {
              ans.push_back(it.first);
          }

          return ans;
    }
};




