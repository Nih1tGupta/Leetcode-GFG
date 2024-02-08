class Solution {
public:
     int dp[10001];
    int count(int n){
//         base case
       
        if(n==0){return 0;}
        // memo
        if(dp[n]!=-1){return dp[n];}
        int mini=INT_MAX;int ans=0;
        for(int i=1;i*i<=n;i++){
         ans= 1+count(n-(i*i));
            mini= min(ans,mini);
        }
        return dp[n]=mini;
    }
    
    
    int numSquares(int n) {
        
        memset(dp,-1,sizeof(dp));
    return count(n);
    }
};