class Solution {
public:
    // int solve(int i,string &s,int &n,vector<int>&dp){
    //     if(i==n){return 1;}
    //     if(s[i]=='0'){return 0;}
    //     if(dp[i]!=-1){return dp[i];}
    //     int a=solve(i+1,s,n,dp);
    //     if(i+1<n){
    //     if(s[i]=='1'|| (s[i]=='2' && s[i+1]<='6')){
    //         a+=solve(i+2,s,n,dp);
    //     }
    //     }
    // return dp[i]=a;
    // }
    int numDecodings(string s) {
        int n=s.length();
          vector<int> t(n+1, 0);
        //t[i] = ways to decode string from index i to n
        t[n] = 1;
        
        for(int i = n-1; i>=0; i--) {
            if(s[i] == '0')
                t[i] = 0;
            else {
                t[i] = t[i+1];
                if(i < n-1 && (s[i] == '1' || (s[i] == '2' && s[i+1] < '7')))
                    t[i] += t[i+2];
            }
        }
        return t[0];
    }
};