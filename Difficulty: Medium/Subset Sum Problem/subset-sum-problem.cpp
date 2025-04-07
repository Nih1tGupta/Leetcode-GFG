//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
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
//     The recursive solution involves changing two parameters: the current index 
//     in the array (n) and the current target sum (sum). We need to track both parameters,
//     so we create a 2D array of size (n+1) x (sum+1) because the value of n will be in
//     the range [0, n] and sum will be in the range [0, sum].
// We initialize the 2D array with -1 to indicate that no subproblems have been computed yet.
// We check if the value at memo[n][sum] is -1. If it is, we proceed to compute the result.
// otherwise, we return the stored result.
    bool isSubsetSum(vector<int>& arr, int sum) {
      int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return f(n-1,sum,arr,dp);
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