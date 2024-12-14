class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n=nums.size();long long c=0;
        int i=0;int j=0;map<int,int>mp;
        while(j<n){
          mp[nums[j]]++;
          while( mp.rbegin()->first -mp.begin()->first>2){
            mp[nums[i]]--;
            if(mp[nums[i]]==0){mp.erase(nums[i]);}
            i++;
          }
          c+=(j-i+1);j++;
        }
        return c;
    }
};