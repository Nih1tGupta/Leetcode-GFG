#define ll long long
class Solution {
    vector<ll> dp;
    ll f(int n) {
        if (n < 0) return 1e18;
        if (n == 0) return 0;
        if (dp[n] != -1) return dp[n];

        ll ans = 1e18;
        for (ll i = 1; i * i <= n; i++){
            ans = min(ans, 1+f(n-i* i));
        }
        return dp[n] = ans;
    }
  public:
    int minSquares(int n) {
        // Code here
        dp.resize(10001, -1);
        return f(n);
    }
};

        // Code here
        // int c=0;
        // for(int i=n;i>=0;i--){
        //     if(i*i <=n){n-=(i*i);c++;}
        // }
        // return c;
        // lagta hai greeddy ubut aisa hoga nhi--> (n=12) try it
        // agar dp karna pdega
        //  12 -->(1,4,9)
        //        11,8,3
        // 
