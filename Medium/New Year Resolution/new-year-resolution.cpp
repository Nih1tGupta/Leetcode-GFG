//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
     int sum=0;
        for(int i=0;i<N;i++)sum+=coins[i];
        vector<vector<bool>>dp(N+1,vector<bool>(sum+1,false));
        for(int i=0;i<=N;i++)dp[i][0]=true;
        for(int i=1;i<=N;i++){
            for(int j=0;j<=sum;j++){
                if(coins[i-1]<=j)dp[i][j]=dp[i-1][j]||dp[i-1][j-coins[i-1]];
                else dp[i][j]=dp[i-1][j];
                if((dp[i][j] && j!=0) && (j%20==0 || j%24==0 || j==2024))return true;
            }
        }
        return false;   
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends