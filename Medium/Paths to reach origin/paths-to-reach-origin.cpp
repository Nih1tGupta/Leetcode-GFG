//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
int mod=1e9+7;
int help(int a,int b, vector<vector<int>>&dp){
    if(a==0 and b==0){return 1;}
    if(a<0 or b<0){return 0;}
    if(dp[a][b]!=-1){return dp[a][b];}
    int A = help(a-1,b,dp);int B =help(a,b-1,dp);
    return dp[a][b]= (A+B)%mod;
}
    int ways(int x, int y)
    {
        vector<vector<int>>dp(x+1,vector<int>(y+1,-1));
        return help(x,y,dp);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends