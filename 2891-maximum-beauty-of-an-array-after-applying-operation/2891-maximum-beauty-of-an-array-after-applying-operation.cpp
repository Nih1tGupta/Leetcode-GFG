class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i]-k,nums[i]+k});
        }
        queue<pair<int,int>>q;int maxi=0;
        for(auto it:v){
            while(!q.empty() and q.front().second<it.first){q.pop();}
            q.push({it.first,it.second});
            maxi=max(maxi,(int)q.size());
        }
        return maxi;
    }
};