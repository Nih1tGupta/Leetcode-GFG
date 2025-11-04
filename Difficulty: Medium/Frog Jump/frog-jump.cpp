class Solution {
  public:
  
    int solve(vector<int>&h,int i,vector<int>&dp){
        if(i==0)return 0;
        if(dp[i]!=-1)return dp[i];
        int left= INT_MAX;
        if(i-1>=0){left= solve(h,i-1,dp)+abs(h[i]-h[i-1]);}
        int right=INT_MAX;
        if(i-2>=0){right= solve(h,i-2,dp)+ abs(h[i]-h[i-2]);}
        return dp[i]=min(left,right);
    }
    int minCost(vector<int>& height) {
        // Code here
        int n=height.size();
        vector<int>dp(n+1,-1);
        int c= solve(height,n-1,dp);
        return c;
    }
};