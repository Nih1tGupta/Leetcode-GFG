class Solution {
  public:
    typedef pair<int,pair<int,int>> P;
    vector<vector<int>> kSmallestPair(vector<int> &arr1, vector<int> &arr2, int k) {
        // code here
        vector<vector<int>>v;
        priority_queue<P,vector<P>,greater<P>>pq;
        int n=arr1.size(); int m=arr2.size();
        int sum= arr1[0]+arr2[0];
        pq.push({sum,{0,0}});
        set<pair<int,int>>vis;
        while(k-- and !pq.empty()){
            auto top= pq.top(); pq.pop();
            int i= top.second.first; int j= top.second.second;
            // sum=top.first;
            v.push_back({arr1[i],arr2[j]});
            if(j+1<m and vis.find({i,j+1})==vis.end()){
                pq.push({arr1[i]+arr2[j+1],{i,j+1}});
                vis.insert({i,j+1});
            }
            if(i+1<n and vis.find({i+1,j})==vis.end()){
                pq.push({arr1[i+1]+arr2[j],{i+1,j}});
                vis.insert({i+1,j});
            }
        }
        return v;
    }
};
