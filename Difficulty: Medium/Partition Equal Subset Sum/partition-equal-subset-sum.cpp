//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // int dp[101][200001];
    bool helper(int idx,vector<int>&arr,int sum,vector<vector<int>>&dp){
        // if(target==0)return 1;
        // if(idx>=v.size())return 0;
        // if(dp[idx][target]!=-1){return dp[idx][target];}
        // bool nt=solve(idx+1,v,target,dp);
        // bool t=false;
        // if(target>=v[idx]){
        //      t=solve(idx+1,v,target-v[idx],dp);
        // }
        // return dp[idx][target]=t|nt;
        if(sum == 0)
            return true;
        if(idx >= arr.size())
            return false;
        if(dp[idx][sum] != -1)
            return dp[idx][sum]; 
        bool ans = helper(idx + 1, arr, sum, dp);
        if(sum - arr[idx] >= 0)
            ans = ans | helper(idx + 1, arr, sum-arr[idx], dp);
        return dp[idx][sum]=ans;
    }
    bool equalPartition(vector<int>&arr) {
        // code here
        int n=arr.size();
        int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%2)return 0;
        vector<vector<int>> dp(arr.size() + 1, vector<int>(sum+1,-1));
        float half=float(sum);
        half=half/2;
        return helper(0,arr,half,dp);
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
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends