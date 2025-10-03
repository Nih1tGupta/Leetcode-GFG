class Solution {
  public:
    
    void solve(int tar, int k, int num, vector<vector<int>>& v, vector<int>& ds) {
    // Base case
    if (ds.size() == k && tar == 0) {
        v.push_back(ds);
        return;
    }
    if (ds.size() > k || tar < 0 || num > 9) return;

    // Include current number
    ds.push_back(num);
    solve(tar - num, k, num + 1, v, ds);
    ds.pop_back();

    // Exclude current number
    solve(tar, k, num + 1, v, ds);
}
    vector<vector<int>> combinationSum(int n, int k) {
        // code here
        vector<vector<int>>v;
        vector<int>ds;
        int mp[10]={0};
        solve(n,k,1,v,ds);
        return v;
    }
};