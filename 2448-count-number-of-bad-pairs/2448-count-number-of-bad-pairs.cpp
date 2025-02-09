class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long c=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if( (i<j) and j-i!=(nums[j]-nums[i]))c++;
        //     }
        // }
        // return c;
        unordered_map<int,int>mp;
        long long n=nums.size();
        for(int i=0;i<nums.size();i++){
            long long diff=i-nums[i];
            if(mp.count(diff)==1){c+=mp[diff];mp[diff]++;}
            else{mp[diff]=1;}
        }
        long long t=n*(n-1)/2;
        return t-c;
    }
};