class Solution {
  public:
    
    int solve(string& s1, string& s2, string& s3,int i,int j,int k, vector<vector<vector<int>>>&dp){
        // base
        if(i<0 ||j<0 || k<0){return 0;}
        if(dp[i][j][k]!=-1){return dp[i][j][k];}
        if(s1[i]==s2[j] && s2[j]==s3[k]){
            return dp[i][j][k]=1+solve(s1,s2,s3,i-1,j-1,k-1,dp);
        }
        else{
            return dp[i][j][k]= max ({
                solve(s1,s2,s3,i-1,j,k,dp),
                solve(s1,s2,s3,i,j-1,k,dp),
                solve(s1,s2,s3,i,j,k-1,dp)
            });
        }
    return 0;
        
    }
    int lcsOf3(string& s1, string& s2, string& s3) {
        int n=s1.length();
        int m=s2.length();
        int o=s3.length();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(m+1,vector<int>(o+1,-1)));
        return solve(s1,s2,s3,n-1,m-1,o-1,dp);
        
    }
};
