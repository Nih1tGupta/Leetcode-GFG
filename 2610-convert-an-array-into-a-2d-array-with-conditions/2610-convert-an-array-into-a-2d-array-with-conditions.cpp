class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<vector<int>>res;
        for(int i=0;i<nums.size();i++){
            int freq=mp[nums[i]];
            if(freq==res.size()){res.push_back({});}
        
         res[freq].push_back(nums[i]);
            mp[nums[i]]++;
        }
        return res;
    }
};