//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int f(int i,int b,int c,vector<int>&p,vector<vector<vector<int>>>&dp){
        // base
        if(i==p.size()||c==0){return 0;}
        // but and not buy
        if(dp[i][b][c]!=-1)return dp[i][b][c];
        long pr=0;
        if(b){
            pr= max( -p[i]+ f(i+1,0,c,p,dp), 0+f(i+1,1,c,p,dp)  );
        }
        else{
            pr=max(f(i+1,1,c-1,p,dp)+p[i], 0+f(i+1,0,c,p,dp));
        }
        return  dp[i][b][c]=pr;

    }
    int maxProfit(vector<int> &prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
        return f(0,1,2,prices,dp);
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxProfit(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends