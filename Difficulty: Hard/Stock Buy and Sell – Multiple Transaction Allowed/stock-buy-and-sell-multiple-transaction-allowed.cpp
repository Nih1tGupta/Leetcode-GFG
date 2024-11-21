//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
        int f(vector<int>&p,int i,int a,vector<vector<int>>&dp){
            if(i>=p.size()){return 0;}
            if(dp[i][a]!=-1)return dp[i][a];
            int pr=0;
            if(a==1){pr=max(f(p,i+1,0,dp)-p[i], 0+f(p,i+1,1,dp));}
            else{
                pr=max( p[i]+f(p,i+1,1,dp) , 0+f(p,i+1,0,dp));
            }
            
         return dp[i][a]=pr;   
        }
    int maximumProfit(vector<int> &prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        return  f(prices,0,1,dp);
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends