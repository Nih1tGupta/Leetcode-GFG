//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(vector<int>&coins,int idx,int sum,vector<vector<int>>&dp){
         if(sum==0) return 0;
        if(sum<0) return INT_MAX/2;
        if(idx<0) return INT_MAX/2;
        if (dp[idx][sum] != -1) return dp[idx][sum];
        
        int ntake = solve(coins,idx-1,sum,dp);
        int take = INT_MAX/2;
        if(coins[idx] > 0 && coins[idx] <= sum){
            take = 1+solve(coins,idx,sum-coins[idx],dp);
        }
        
        return dp[idx][sum]=min(take,ntake);
    }
    int minCoins(vector<int> &coins, int sum) {
        // code here
        int n=coins.size();
        vector<vector<int>> dp(n+1, vector<int>(sum + 1, -1));
        if(sum==0)return 0;
        int ans= (int)solve(coins,n-1,sum,dp);
        if(ans==INT_MAX/2){return -1;}
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends