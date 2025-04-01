class Solution {
public:
    long long solve(vector<vector<int>>&q,vector<long long>&dp,long long i){
        //  base
        if(i>=q.size())return 0;
        if(dp[i]!=-1)return dp[i];
        long long take=q[i][0]+ solve(q,dp,i+q[i][1]+1);
        long long nottake= solve(q,dp,i+1);
        return dp[i]=max(take,nottake);
    }
    long long mostPoints(vector<vector<int>>& q) {
        long long n=q.size();
        vector<long long>dp(n,-1);
        return solve(q,dp,0);
    }
};