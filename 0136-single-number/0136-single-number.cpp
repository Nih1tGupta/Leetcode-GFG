class Solution {
public:
    int singleNumber(vector<int>& nums) {int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){mp[nums[i]]++;}
       int ans=0;
        for (auto &it:mp )  {
            if(it.second==1){
                ans=it.first;
                break;
            }
        } 
        return ans;
    }
};