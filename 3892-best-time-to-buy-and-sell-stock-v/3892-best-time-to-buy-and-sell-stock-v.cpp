class Solution {
public:
    #define ll long long

    ll dp[1001][502][3];

    ll f(int ind, int k, int type, vector<int>& prices){

        if(k==0) return 0;
        if(ind==prices.size()){
            if(type==0) return 0;
            return -1e15;
        }

        if(dp[ind][k][type]!=-1) return dp[ind][k][type];

        ll ans=f(ind+1,k,type,prices);      //not take
        /// take cases
        if(type==0){
            ans=max({ans,-prices[ind]+f(ind+1,k,1,prices),prices[ind]+f(ind+1,k,2,prices)});
        }
        else if(type==1){
            ans=max({ans,prices[ind]+f(ind+1,k-1,0,prices)});
        }
        else if(type==2){
            ans=max({ans,-prices[ind]+f(ind+1,k-1,0,prices)});
        }

        return dp[ind][k][type]=ans;
    }
    
    long long maximumProfit(vector<int>& prices, int k) {
        memset(dp,-1,sizeof(dp));
        // idx-k-st
        return f(0,k,0,prices); 
    }
};