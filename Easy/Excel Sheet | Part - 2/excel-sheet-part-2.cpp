//{ Driver Code Starts
//Initial template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    int ExcelColumnNumber(string s)
    {
       int res=0;int ans=0;
       for(int i=0;i<s.length();i++){
           res*=26;
           res+=s[i]-'A'+1;
       }
       return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.ExcelColumnNumber(s)<<endl;
    }
}
// } Driver Code Ends