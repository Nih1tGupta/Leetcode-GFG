class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();long long  c=0;
        vector<bool>v(n,0);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<n;i++){pq.push({nums[i],i});}
            while(!pq.empty()){
                int num=pq.top().first;
                int idx=pq.top().second;
                pq.pop();
                if(v[idx]==0){
                c+=num;v[idx]=1;
                if(idx!=0)v[idx-1]=1;if(idx!=n-1)v[idx+1]=1;
                }
            }
        return c;

    }
};