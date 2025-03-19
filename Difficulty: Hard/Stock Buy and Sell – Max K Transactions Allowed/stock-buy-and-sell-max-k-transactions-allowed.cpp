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
    int maxProfit(vector<int>& prices, int k) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return f(0,1,k,prices,dp);
    }
};


//{ Driver Code Starts.

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        istringstream iss(input);
        vector<int> arr;
        int num;

        // Read integers from the input string
        while (iss >> num) {
            arr.push_back(num);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << ob.maxProfit(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends