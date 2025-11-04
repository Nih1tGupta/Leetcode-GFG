class Solution {
public:
    // class comp{
    //     bool operator()(pair<int,int>p1,pair<int,int>p2){
    //         if(p1.second==p2.second)return p2.first >p1.first;
    //         return p2.second >p1.second;
    //     }
    // };
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int res=0;int n=nums.size();
        vector<int>v(n-k+1);
        for(int i=0;i<n-k+1;i++){
            map<int,int>mp;
            for(int j=i;j<i+k;j++){
                mp[nums[j]]++;
            }
            vector<pair<int,int>>p;
            for(auto it:mp){
            p.push_back({it.second,it.first});
            }
            sort(p.begin(),p.end(),greater<pair<int,int>>());
            for(int j=0;j<p.size();j++){
                if(j<x){
                v[i]+=p[j].first*p[j].second;
                }
            }
        }
        return v;
    }
};