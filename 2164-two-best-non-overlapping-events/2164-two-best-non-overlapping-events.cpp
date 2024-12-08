class Solution {
public:
    int bs(int prev,vector<vector<int>>&e){
        int l=0;int r=e.size()-1; int ans=e.size();
        while(l<=r){
            int mid= l+(r-l)/2;
            if(e[mid][0]>prev){ans=mid;r=mid-1;}
            else{l=mid+1;}
        }
        return ans;
    }
    int solve(int i,vector<vector<int>>&e,int c,vector<vector<int>>&dp){
        if(c==2 || i>=e.size())return 0;
        if(dp[i][c]!=-1){return dp[i][c];}
        int nxtidx=bs(e[i][1],e);
        int take=e[i][2] +solve(nxtidx,e,c+1,dp);
        int nottake=solve(i+1,e,c,dp);
        return dp[i][c]=max(take,nottake);
    }
    int maxTwoEvents(vector<vector<int>>& events) {
        int n=events.size();
        vector<vector<int>>dp(n+1,vector<int>(3,-1));
        sort(events.begin(),events.end());
        return solve(0,events,0,dp);

    }
};