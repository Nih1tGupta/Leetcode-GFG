//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to compute the edit distance between two strings
    int fun(int i,int j,string &str1,string &str2,vector<vector<int>> &dp){
        if(i==-1)
            return j+1;
        if(j==-1)
            return i+1;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(str1[i]==str2[j])
            return dp[i][j]=fun(i-1,j-1,str1,str2,dp);
        
        int t1=1+fun(i-1,j,str1,str2,dp);
        int t2=1+fun(i,j-1,str1,str2,dp);
        int t3=1+fun(i-1,j-1,str1,str2,dp);
        
        return dp[i][j]=min({t1,t2,t3});
        
    }
  
  
    int editDistance(string str1, string str2) {
        // Code here
        int n=str1.size();
        int m=str2.size();
    
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return fun(n-1,m-1,str1,str2,dp);
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string s1;
        getline(cin, s1);
        string s2;
        getline(cin, s2);
        Solution ob;
        int ans = ob.editDistance(s1, s2);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends