class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int maxi=0;
        int i=0;int j=0;
        while(j<n){
            mp[nums[j]]++;
              while(i <j and mp[nums[j]]>k){mp[nums[i]]--;i++;}
            maxi= max(maxi,j-i+1);j++;
        }
        return maxi;
    }
};