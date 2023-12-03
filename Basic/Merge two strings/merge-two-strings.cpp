//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
   int n1=S1.length();
    int n2=S2.length();
    string ans;
    for(int i=0;i<n1+n2;i++)
    {
        if(i<n1)
        {
            ans=ans+S1[i];
        }
        if(i<n2)
        {
            ans=ans+S2[i];
        }
    }
    return ans;
}