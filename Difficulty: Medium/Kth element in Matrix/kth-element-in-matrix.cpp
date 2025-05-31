class Solution {
  public:
  int check(int mid,vector<vector<int>>&matrix,int n,int m){
        int ans=0;
        
        for(int row=0;row<n;row++){
            ans+=upper_bound(matrix[row].begin(),matrix[row].end(),mid)-matrix[row].begin();
        }
        return ans;
    }
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        // code here
//         vector<int>v;int n=matrix.size();
//   for(int i=0; i<n; i++){
//       for(int j=0; j<n; j++){
//           v.push_back(matrix[i][j]);
//       }
//   }
//   sort(v.begin(),v.end());
//   return v[k - 1];

// 1  5  9
// 10 11 13
// 12 13 15
// first tell why bs on index failed
// try bs on ans but  thtis is issue.
    // let s suppose k=8, then do bs, we will find k==8 when mid ==14
    // but 14 toh ha ih nhi->toh lower jayenge
    int n=matrix.size();
        int m=matrix[0].size();
        int l=matrix[0][0];
        int r=matrix[n-1][m-1];
        
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            
            int cnt=check(mid,matrix,n,m);
            if(cnt>=k){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};