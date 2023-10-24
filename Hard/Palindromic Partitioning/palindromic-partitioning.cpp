//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
  
   bool ispalindrome(int i,int j,string str){
        if(i==j){
            return true;
        }
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }
    int solve(string str,int i,int j,vector<vector<int>>&dp){
        if(j==str.size()-1){
            if(ispalindrome(i,j,str)){
                return 0;
            }
            else{
                return INT_MAX;
            }
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int cut=INT_MAX,notcut=INT_MAX;
        if(ispalindrome(i,j,str)){
            cut=1+solve(str,j+1,j+1,dp);
        }
        notcut=solve(str,i,j+1,dp);
        dp[i][j]=min(cut,notcut);
        return dp[i][j];
    }
    
    int palindromicPartition(string str)
    {
        // code here
        int ans=0,n=str.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        ans=solve(str,0,0,dp);
        return ans;
    }
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends