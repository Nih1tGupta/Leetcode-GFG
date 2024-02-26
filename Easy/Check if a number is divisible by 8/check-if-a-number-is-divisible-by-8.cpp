//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        int sum=0;
       for(int i=0;i<s.size();i++)
       {
           sum=sum*2+(s[i]-'0');
           sum=sum%8;
       }
       if(sum==0)
       return 1;
       else
       return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends