class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        // code here
        vector<vector<int>>v;
        sort(arr.begin(),arr.end());
        v.push_back(arr);
        while(next_permutation(arr.begin(),arr.end())){v.push_back(arr);}
        return v;
    }
};