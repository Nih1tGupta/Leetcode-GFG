//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // int dp[1001][1001];
    // int solve(vector<int>&arr,int i,int p){
    //     if(i>=arr.size()){return 0;}
    //     if(dp[i][p]!=-1 and p!=-1){return dp[i][p];}
    //     int t=0;
    //     if(p==-1||arr[i]>arr[p]){
    //         t=1+solve(arr,i+1,i);
    //     }
    //     int nt=solve(arr,i+1,p);
    //     if(p!=-1){dp[i][p]=max(t,nt);}
    //     return max(t,nt);
    // }
    int lis(vector<int>& arr) {
        // code here
        // memset(dp,-1,sizeof(dp));
        // return solve(arr,0,-1);
        int n=arr.size();
        vector<int>dp(n+1,1);
        int maxi=1;
        for(int i=0;i<n;i++){
            for(int prev=0;prev<=i-1;prev++){
                if(arr[prev]<arr[i]){
                    dp[i]=max(dp[i],1+dp[prev]);
                }
            }
            maxi=max(maxi,dp[i]);
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        int n;
        vector<int> arr;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        cout << obj.lis(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends