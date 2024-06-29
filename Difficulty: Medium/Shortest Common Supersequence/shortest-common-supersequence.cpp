//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    int t[101][101];
    //Function to find length of shortest common supersequence of two strings.
    int solve(string &x,string &y,int m,int n){
        if(m==0||n==0)return m+n;
        if(t[m][n]!=-1)return t[m][n];
        if(x[m-1]==y[n-1])return t[m][n]=1+solve(x,y,m-1,n-1);
        else{
            int a= 1+solve(x,y,m-1,n);
            int b= 1+solve(x,y,m,n-1);
            return   t[m][n]=min(a,b);
        }
    }
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
     memset(t,-1,sizeof(t));
        return solve(X,Y,m,n);
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends