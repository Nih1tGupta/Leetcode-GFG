class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;int j=0;
        unordered_map<int,int>mp;
        long long ct=0;
        long long res=0;
        while(j<n){
            ct+=mp[nums[j]];
            mp[nums[j]]++;
            while(ct>=k){
                res+=(n-j);
                mp[nums[i]]--;
                ct-=mp[nums[i]];
                i++;
            }
        j++;
        }
        return res;
    }
};