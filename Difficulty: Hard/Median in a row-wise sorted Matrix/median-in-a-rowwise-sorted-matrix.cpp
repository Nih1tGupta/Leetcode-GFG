class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
          vector<int>v;
      for(int i=0;i<mat.size();i++)
      {
          for(int j=0;j<mat[0].size();j++)
          {
              v.push_back(mat[i][j]);
          }
      }
       sort(v.begin(),v.end());
       int n=v.size();
       
       if(n%2==1)
       {
           return v[n/2];
       }
       else
       {
           return (v[n/2]+v[n/2-1])/2.0;
       }
       return -1;
    }
};
