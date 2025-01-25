class Solution {
public:
    // int f(int i,int j,string s,string t,vector<vector<int>>&dp){
    //     // base
    //     if(j<0)return 1;
    //     if(i<0)return 0;
    //     // match
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     if(s[i]==t[j]){
    //         return dp[i][j]=f(i-1,j-1,s,t,dp)+ f(i-1,j,s,t,dp);
    //     }
    //     else{
    //         return dp[i][j]=f(i-1,j,s,t,dp);
    //     }
    // }
    int numDistinct(string s, string t) {
        int n=s.length(); int m=t.length();
        vector<vector<double>>dp(n+1,vector<double>(m+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int j=1;j<=m;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                // match
                if(s[i-1]==t[j-1]){
                dp[i][j]=dp[i-1][j-1]+ dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
       return dp[n][m];
    }
};