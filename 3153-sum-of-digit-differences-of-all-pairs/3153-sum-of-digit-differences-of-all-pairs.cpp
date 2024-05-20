class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        map<pair<int,int>,int>mp;
        int digit;
        for(auto &it:nums){
            int idx=0;
            while(it>0){
                mp[{it%10,idx}]++;
                idx++;
                it/=10;
            }
            digit=idx;
        }
        long long total =1ll *(nums.size())*(nums.size()-1)/2 *digit;
        for(auto &[i,j] :mp){
            total-= (j*(j-1))/2;
        }
        return total;
    }
};