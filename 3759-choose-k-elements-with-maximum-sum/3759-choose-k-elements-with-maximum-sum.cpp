class Solution {
public:
    vector<long long> findMaxSum(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        vector<long long>v(n,0);
        vector<pair<int,int>>idx;
        for(int i=0;i<n;i++){
            idx.push_back({nums1[i],i});
        }
        sort(idx.begin(),idx.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        unordered_map<int,long long>mp;
        long long sum=0;
        int j=0;
        for(int i=0;i<n;i++){
            int index=idx[i].second;
            while(j<i){
                int prev=idx[j].second;
                if(idx[j].first>=idx[i].first){break;}
                pq.push(nums2[prev]);
                sum+=nums2[prev];
                if(pq.size()>k){
                    sum-=pq.top();pq.pop();
                    }
                    j++;
                }
            
            mp[index]=sum;
        }
    for(int i=0;i<n;i++){
        v[i]=mp[i];
    }
    return v;
    }
};