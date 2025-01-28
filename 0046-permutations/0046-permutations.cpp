class Solution {
public:
    void f(vector<int>& nums,vector<vector<int>>&ans,vector<bool>& vis,vector<int>& v){
        // base
        if(v.size()==nums.size()){
            ans.push_back(v);
        }
        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
            v.push_back(nums[i]);
            vis[i]=true;
            f(nums,ans,vis,v);
            vis[i]=false;
            v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;int n=nums.size();
        vector<bool>vis(n);
        f(nums,ans,vis,v);
        return ans;
    }
};