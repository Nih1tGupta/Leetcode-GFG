class Solution {
    typedef long long ll;
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        ll mini, maxi,ans;
        mini= min(need1,need2);
        maxi= max(need1,need2);
        ans= (ll)need1*cost1 + (ll)need2*cost2;
        ans= min( ans,  ( (ll)mini*costBoth + (ll)(need1-mini)*cost1 + (ll)(need2-mini)*cost2 ) );
        ans= min( ans, costBoth* maxi );
        return ans;
    }
};