//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int subsequenceCount(string s, string t)
    {
     int m=s.length(); int n=t.length();
     vector<vector<int>>dp(n+1,vector<int>(m+1,0));
     for(int i=0;i<m;i++){dp[0][i]=1;}
       for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                if(t[i-1]==s[j-1])
                    dp[i][j] = (dp[i-1][j-1]+dp[i][j-1])%1000000007;
                else
                    dp[i][j] = dp[i][j-1];
                    
        return dp[n][m];
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends