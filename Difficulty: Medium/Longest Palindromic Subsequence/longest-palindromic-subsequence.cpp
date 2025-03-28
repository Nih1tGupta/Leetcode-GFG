//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
   int solve(int i,int j,string &s1,string &s2,vector<vector<int>>&dp){
        if(i<0||j<0){return 0;}
        int t=0;
        if(dp[i][j]!=-1){return dp[i][j];}
        if(s1[i]==s2[j]){
            return dp[i][j]=1+solve(i-1,j-1,s1,s2,dp);
        }
        else{
            return dp[i][j]=max(solve(i-1,j,s1,s2,dp),solve(i,j-1,s1,s2,dp));
        }

    }
    int longestPalinSubseq(string &s) {
        // code here
        int n=s.length();
        string s2=s;
        reverse(s.begin(),s.end());
        int m=s.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(n-1,m-1,s,s2,dp);
    }
};


//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends