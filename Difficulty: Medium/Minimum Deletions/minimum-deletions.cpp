class Solution {
  public:
    int lps(string &s,int i,int j,vector<vector<int>>&dp){
        if(i>j)return 0;
        if(i==j)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==s[j]){return 2+lps(s,i+1,j-1,dp);}
        else{
            return dp[i][j]= max(lps(s,i+1,j,dp),lps(s,i,j-1,dp));
        }
        
    }
    int minDeletions(string s) {
        // code here
        int n=s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int x=lps(s,0,n-1,dp);
        return n-x;
    }
};