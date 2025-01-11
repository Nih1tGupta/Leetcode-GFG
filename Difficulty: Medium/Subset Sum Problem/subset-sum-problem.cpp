//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
//   int dp[201][40001];
    bool f(int i,int t,vector<int>&a,vector<vector<int>>&dp){
        // base
        if(t==0)return 1;
        if(i==0)return (a[i]==t);
        if(dp[i][t]!=-1)return dp[i][t];
        bool nt=f(i-1,t,a,dp);
        bool ta=false;
        if(t>=a[i]){ta=f(i-1,t-a[i],a,dp);}
        return dp[i][t]=(nt or ta);
        
    }
    bool isSubsetSum(vector<int>& arr, int target) {
        int n=arr.size();
        // memset(dp,-1,sizeof(dp));
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return f(n-1,target,arr,dp);
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
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends