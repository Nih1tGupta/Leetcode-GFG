class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
          int n = arr.size();
       vector<int>ans;
     unordered_map<int,int>mp;
     for(int i=0;i<n;i++){
         mp[arr[i]]++;
     }
     
       priority_queue<pair<int,int>>pq;
        for(auto it: mp){
            pq.push({it.second,it.first});
        }

        while(k--){
               pair<int,int>v = pq.top();
            pq.pop();
            ans.push_back(v.second);
        }
        return ans; 
    }
};
