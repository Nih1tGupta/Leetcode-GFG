class Solution {
public:
    int maxSum(vector<int>& nums) {
       int maxi=*max_element(nums.begin(),nums.end());
       if(maxi<0)return maxi;
       unordered_set<int>st;int s=0;
       for(auto it:nums){st.insert(it);}
       for(auto it:st){if(it>=0)s+=it;}
       return s;
    }
};