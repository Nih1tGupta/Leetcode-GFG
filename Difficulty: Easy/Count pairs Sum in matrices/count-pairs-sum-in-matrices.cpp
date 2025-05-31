class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        int n=mat1.size();
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v1.push_back(mat1[i][j]);
                v2.push_back(mat2[i][j]);
            }
        }
    unordered_map<int,int>mp;
    int c=0;
    for(auto it:v2){mp[it]++;}
    for(int i=0;i<v1.size();i++){
        if(mp.find(x-v1[i])!=mp.end()){c++;}
    }
    return c;
    }
};