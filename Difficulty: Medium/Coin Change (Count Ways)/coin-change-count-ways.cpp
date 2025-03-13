//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(int idx,vector<int>&c,int s,int n,vector<vector<int>>&dp){
        if(idx==n){
            if(s==0)return 1;
            else{return 0;}
        }
        if(dp[idx][s]!=-1)return dp[idx][s];
        int ans=0;
        ans+=solve(idx+1,c,s,n,dp);
        if(c[idx]<=s){ans+=solve(idx,c,s-c[idx],n,dp);}
        return dp[idx][s]=ans;
        
    }
    int count(vector<int>& coins, int sum) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
       return solve(0,coins,sum,n,dp);
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
        int sum;
        cin >> sum;
        cin.ignore();
        Solution ob;
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends