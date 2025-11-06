class Solution {
  public:
    int dp[50];
    int f(int n){
    if(n==0 || n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=f(n-1)+ f(n-2);
    }
    int numberOfWays(int n) {
        // code here
        memset(dp,-1,sizeof(dp));
        return f(n);
    }
};