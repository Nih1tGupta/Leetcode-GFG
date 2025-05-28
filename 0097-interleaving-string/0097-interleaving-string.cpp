class Solution {
public:
    bool solve(int i,int j,int k,string &s1,string &s2,string &s3,int n,int m,int o,  vector<vector<vector<int>>>&dp){
        if(i==n && j==m && k==o){return true;}
        if(k>=o){return false;}
        if(dp[i][j][k]!=-1)return dp[i][j][k];
        bool a =false;
        if(s1[i]==s3[k]){a=solve(i+1,j,k+1,s1,s2,s3,n,m,o,dp);}
        bool b=false;
        if(s2[j]==s3[k]){b=solve(i,j+1,k+1,s1,s2,s3,n,m,o,dp);}
        return dp[i][j][k]=a|b;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n=s1.length(); int m=s2.length(); int o= s3.length();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(o+1,-1)));
        return solve(0,0,0,s1,s2,s3,n,m,o,dp);
    }
};