class Solution {
public:
    class comp{
        bool operator()(pair<int,int>p1,pair<int,int>p2){
            if(p1.second==p2.second)return p2.first >p1.first;
            return p2.second >p1.second;
        }
    };
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<=n-k;i++){
            map<int,int>m;
            for(int j=i;j<i+k;i++){m[nums[j]]++;}
            priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
            for(auto it:m){pq.push({it.first,it.second});}
            int sum=0;
            for(int i=0;i<x && !pq.empty(); i++){
                sum+=(pq.top().first)*pq.top().second;
                pq.pop();
            }
            v.push_back(sum);
        }
    return v;
    }
};