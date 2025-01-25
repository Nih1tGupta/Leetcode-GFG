class Solution {
public:
    int f(int i,int b,int c,vector<int>& prices,vector<vector<vector<int>>>&dp){
        // base
        if(i==prices.size() || c==0)return 0;
        int profit=0;
        if(dp[i][b][c]!=-1)return dp[i][b][c];
        if(b){
            profit=max ( -prices[i]+f(i+1,0,c,prices,dp), f(i+1,1,c,prices,dp)  );
        }
        else{
            profit= max( ( prices[i]+f(i+1,1,c-1,prices,dp) ), f(i+1,0,c,prices,dp) );
        }
        return dp[i][b][c]=profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return f(0,1,k,prices,dp);
    }
};