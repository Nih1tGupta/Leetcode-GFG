//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    
    int offer(int i,int n,int total,vector<int> &cost,vector<vector<int>>&dp){
        // if i==n(last)
        if(i==n){return 0;}
        if(dp[i][total]!=-1){return dp[i][total];}
        if(cost[i]>total){return dp[i][total]=offer(i+1,n,total,cost,dp);}
        
        else{
            int left_amt=total-cost[i];
            int refund=0.9*cost[i];
            left_amt=left_amt+refund;
             int buy_kro= 1+offer(i+1,n,left_amt,cost,dp);
             int buy_not= offer(i+1,n,total,cost,dp);
             return dp[i][total]= max(buy_kro,buy_not);
        }
        
        
        
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        vector<vector<int>>dp(n+1,vector<int>(total+1,-1));
        return offer(0,n,total,cost,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends