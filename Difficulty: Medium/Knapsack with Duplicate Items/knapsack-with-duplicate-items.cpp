//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
  int solve(int ind,int W,int wt[],int val[],vector<vector<int>> &dp){
        // base case 
        // if(ind==0){
             
        //      if(wt[ind]<=W) return val[ind];
        //      if(wt[ind]>W)  return 0;
            
        // }
         if(ind == 0){
            return ((int) W / wt[0]) * val[0];
        }
         
          if(dp[ind][W]!=-1) return dp[ind][W];
        //  pick that weight
        int pick=0;
        if(wt[ind]<=W){
          
          pick= val[ind] + solve(ind,W-wt[ind],wt,val,dp);    
        
        }
        // if i will not pick that element 
        int notpick= 0 + solve(ind-1,W,wt,val,dp);
        
         return dp[ind][W]= max(pick,notpick);
       }
    int knapSack(int n, int W, int val[], int wt[])
    {
        // code here
         vector<vector<int>> dp(n,vector<int>(W+1,-1));
       return solve(n-1,W,wt,val,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends