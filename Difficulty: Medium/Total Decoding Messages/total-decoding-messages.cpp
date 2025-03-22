//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int mod=1e9+7;
    int solve(int idx,string &s,vector<int>&dp){
        if(idx==s.length()){return 1;}
        if(dp[idx]!=-1)return dp[idx];
        int single=0;
        if(s[idx]!='0'){single=solve(idx+1,s,dp);}
        int doublee=0;
        if(s[idx]!='0' and idx+1<s.length()){
            string ss="";
            ss+=s[idx];
            ss+=s[idx+1];
            int num=stoi(ss);
            if(num<=26){
                doublee=solve(idx+2,s,dp);
            }
        }
        return dp[idx]=1ll*(single+doublee)%mod;
        
    }
    int countWays(string &digits) {
        // Code here
        if(digits[0]=='0')return 0;
        int n=digits.length();
        vector<int>dp(n+4,-1);
        return solve(0,digits,dp);
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string digits;
        getline(cin, digits);
        Solution obj;
        int ans = obj.countWays(digits);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends