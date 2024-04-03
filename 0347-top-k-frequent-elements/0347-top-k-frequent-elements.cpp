class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){mp[nums[i]]++;}
        for(auto it:mp){pq.push({it.second,it.first});}
        while(!pq.empty() and k--){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};