class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        int n= mat.size(); int sz=n*n;
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(mat[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};
