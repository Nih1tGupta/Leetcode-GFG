class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        // SPLIT AT EVERY IDX
        unordered_map<int,int>mpf;
        unordered_map<int,int>mp1;
        int n=nums.size();
        for(auto it:nums){mpf[it]++;}
        for(int i=0;i<nums.size();i++){
              int consider=nums[i];
            //   split
            mp1[consider]++;
            mpf[consider]--;
            if( mp1[consider]>(i+1)/2 and mpf[consider]>(n-i-1)/2){return i;}
        }
        return -1;
    }
};