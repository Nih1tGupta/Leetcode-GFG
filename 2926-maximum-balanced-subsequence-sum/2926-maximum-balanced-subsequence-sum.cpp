class Solution {
public:
    long long maxBalancedSubsequenceSum(vector<int>& nums) {
        map<int ,long long >mp;
        long long  res=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
          auto it= mp.upper_bound(nums[i]-i);
            long long sum=nums[i];
            if(it!=mp.begin()){it--;sum+=it->second;}
        
        
        mp[nums[i]-i]=max(mp[nums[i]-i],sum);
        it= mp.upper_bound(nums[i]-i);
        while(it!=mp.end() and it->second <=sum){mp.erase(it++);}
            res= max(res,sum);
        }
        return res;
    }
};