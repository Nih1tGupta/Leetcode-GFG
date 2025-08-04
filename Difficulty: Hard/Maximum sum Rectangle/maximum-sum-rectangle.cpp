class Solution {
  public:
    int maxRectSum(vector<vector<int>> &mat) {
        // code here
        int n=mat.size(); int m=mat[0].size();
        int ans=INT_MIN;
        for(int s=0;s<m;s++){
            vector<int>temp(n,0);
            for(int e=s;e<m;e++){
                for(int i=0;i<n;i++){temp[i]+=mat[i][e];}
                int sum=0; int maxi=INT_MIN;
                for(int i=0;i<n;i++){
                    sum+=temp[i]; maxi=max(maxi,sum);
                    if(sum<0)sum=0;
                }
                ans=max(ans,maxi);
            }
        }
        return ans;
    }
};
