class Solution {
public:
#define ll long long
    ll solve(int mid,vector<int>& piles){
        ll ans=0;
        for(int i=0;i<piles.size();++i){
            ans+=ceil((double) piles[i]/(double) mid);
        }
        return ans;
    }
    int minimizedMaximum(int h, vector<int>& piles) {
        int n=piles.size(),maxi=-1e9;
        for(int i=0;i<n;++i) maxi=max(maxi,piles[i]);
        ll lo=1,hi=maxi;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(solve(mid,piles)>h){lo=mid+1;}
            else{hi=mid-1;}
        }
        return (int)lo;
    }
};