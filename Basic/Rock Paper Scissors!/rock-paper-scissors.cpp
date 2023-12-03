//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string gameResult (string s)
        {
            for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1])
            return "DRAW";
            else if(s[i]=='R'&&s[i+1]=='S'||
           s[i]=='S'&&s[i+1]=='P' ||
           s[i]=='P'&&s[i+1]=='R')
           return "A";
           else 
           return "B";
        }
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.gameResult (s) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends