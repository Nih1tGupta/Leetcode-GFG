//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int f(int i,int p[],int rod,int n,vector<vector<int>>&dp){
      if(rod==0)return 0;
      if(i==n)return -1e9;
      if(dp[i][rod]!=-1)return dp[i][rod];
      int nt=f(i+1,p,rod,n,dp);
      int t=-1e9;
      if(rod>=i+1){t=p[i]+f(i,p,rod-(i+1),n,dp);}
      return dp[i][rod]=max(t,nt);
  }
    int cutRod(int price[], int n) {
       vector<vector<int>>dp(n,vector<int>(n+1,-1));
       return f(0,price,n,n,dp);
       }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends