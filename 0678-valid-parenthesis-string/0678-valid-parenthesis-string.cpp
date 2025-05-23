class Solution {
public:
    bool solve(int idx,int ct,string s,vector<vector<int>>&dp){
        // base
        if(idx==s.length()){
            return (ct==0);
        }
        if(dp[idx][ct]!=-1)return dp[idx][ct];
        bool flag=false;
        if(s[idx]=='*'){
            flag|= solve(idx+1,ct+1,s,dp);
            if(ct){flag |=solve(idx+1,ct-1,s,dp);}
            flag|=solve(idx+1,ct,s,dp);
        }
        else if(s[idx]=='('){
            flag |=solve(idx+1,ct+1,s,dp);
        }
        else{
            if(ct)flag|=solve(idx+1,ct-1,s,dp);
        }
        return dp[idx][ct]=flag;
    }
    bool checkValidString(string s) {
        // int min=0;int max=0;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='('){min++;max++;}
        //     else if(s[i]==')'){min--;max--;}
        //     else{min--;max++;}
        //     if(min<0)min=0;
        //     if(max<0)return 0;
        // }
        // return min==0;
        int n=s.length();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(0,0,s,dp);
    }
};