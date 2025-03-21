//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // int solve(int i,vector<int>&v,vector<int>&dp){
    //     if(i>=v.size()){return 0;}
    //     if(dp[i]!=-1)return dp[i];
    //     int take=v[i]+solve(i+2,v,dp);
    //     int nt=solve(i+1,v,dp);
    //     return dp[i]=max(take,nt);
    // }
    // int maxValue(vector<int>& arr) {
        // int n=arr.size();
        // vector<int>v;
        // vector<int>v2;
        // for(int i=1;i<n;i++){v.push_back(arr[i]);}
        // for(int i=0;i<n-1;i++){v2.push_back(arr[i]);}
        // vector<int>dp(100005,-1);
        // return max( solve(0,v,dp) , solve(0,v2,dp));
        int helper(int i,int endIndex,vector<int>& arr,vector<int>&dp){
        if(i>=endIndex){return 0;}
        if(dp[i]!=-1){
            return dp[i];
        }
        int include=arr[i]+helper(i+2,endIndex,arr,dp);
        int exclude=helper(i+1,endIndex,arr,dp);
        return dp[i]=max(include,exclude);
    }

    int maxValue(vector<int>& arr) {
        int n=arr.size();
        if(n==1){
            return arr[0];
        }
        vector<int>dp1(n,-1);
        int case1 = helper(0,n-1,arr,dp1);
        vector<int>dp2(n,-1);
        int case2=helper(1,n,arr,dp2);
        return max(case1,case2);
    
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        int res;
        res = ob.maxValue(arr);
        cout << res << "\n"
             << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends