class Solution {
public:
    void solve(int n,int idx,int k,vector<vector<int>>&ans,vector<int>&ds){
        if(idx==n+1){
        if(ds.size()==k){
            ans.push_back(ds);
            return ;
        }
        return ;
        }
        ds.push_back(idx);
        solve(n,idx+1,k,ans,ds);
        ds.pop_back();
        solve(n,idx+1,k,ans,ds);

    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        vector<int>nums(n,0);
        for(int i=0;i<n;i++){nums[i]=i+1;}
        solve(n,1,k,ans,ds);
    return ans;
    }
};