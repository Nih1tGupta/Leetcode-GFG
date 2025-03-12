class Solution {
public:
   int n;
int dp[1005][56];
int f(vector<int>&a,int idx,int k){
    if(idx==n&&k==0) return 0;
    if(k<0) return INT_MAX;
    else if(idx==n) return INT_MAX;
    if(idx>=0&&dp[idx][k]!=-1) return dp[idx][k];
    int ans=INT_MAX;
    int sum=0;
    for(int i=idx;i<n;i++){
       sum+=a[i];
        
        ans=min(ans,max(sum,f(a,i+1,k-1)));
       

    }
    return dp[idx][k]=ans;
}
    int splitArray(vector<int>& a, int k) {
      memset(dp,-1,sizeof(dp));
        n=a.size();
       
        return f(a,0,k);
        
    }
};