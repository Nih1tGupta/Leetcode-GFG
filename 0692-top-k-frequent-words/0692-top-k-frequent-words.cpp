class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
            vector<string>ans;
        unordered_map<string,int>mp;
        for(auto i:words) mp[i]++;
        priority_queue<pair<int,string>>pq;
        for (auto it:mp){
            pq.push({-it.second,it.first});
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};