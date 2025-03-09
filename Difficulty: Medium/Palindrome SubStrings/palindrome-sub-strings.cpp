//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool solve(int  i,int j,string &s,vector<vector<int>>&dp){
     if(i>=j)return 1;
      if(dp[i][j]!=-1)return dp[i][j];
      
          if(s[i]==s[j])return dp[i][j]=solve(i+1,j-1,s,dp);
          return dp[i][j]=0;
      

  }
    int countPS(string &s) {
        int n=s.length();
        int c=0;
         vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
           for(int j=i;j<n;j++){
               if(solve(i,j,s,dp) and j-i+1>=2){c++;}
           }
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.countPS(s) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends