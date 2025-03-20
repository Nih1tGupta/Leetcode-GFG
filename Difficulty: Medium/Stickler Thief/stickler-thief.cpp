//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// } Driver Code Ends

class Solution {
  public:
    int solve(int i,vector<int>&v,vector<int>&dp){
        if(i>=v.size()){return 0;}
        if(dp[i]!=-1)return dp[i];
        int take=v[i]+solve(i+2,v,dp);
        int nt=solve(i+1,v,dp);
        return dp[i]=max(take,nt);
    }
    int findMaxSum(vector<int>& arr) {
        // code here
        vector<int>dp(100005,-1);
        return solve(0,arr,dp);
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

        Solution ob;
        cout << ob.findMaxSum(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends