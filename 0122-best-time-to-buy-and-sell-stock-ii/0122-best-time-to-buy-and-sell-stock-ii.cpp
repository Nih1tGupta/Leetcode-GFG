class Solution {
public:
    int solve(int idx,int b,vector<int>&v,vector<vector<int>>&dp){
        if(idx==v.size()){return 0;}
        if(dp[idx][b]!=-1)return dp[idx][b];
        long  p=0;
        if(b){
            p= max( -v[idx]+solve(idx+1,0,v,dp) , 0+solve(idx+1,1,v,dp));
        }
        else{
            p= max( v[idx]+solve(idx+1,1,v,dp) , 0+solve(idx+1,0,v,dp));
        }
        return dp[idx][b]=p;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        return solve(0,1,prices,dp);
    }
};