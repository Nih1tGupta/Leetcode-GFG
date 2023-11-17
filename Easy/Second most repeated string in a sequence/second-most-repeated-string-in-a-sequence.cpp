//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
          int max1=INT_MIN;
          int max2=INT_MIN;string ans="";
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){mp[arr[i]]++;}
        for(auto it:mp){if(it.second>max1){max1=it.second;}}
        for(it:mp){
            if(it.second>max2 and it.second!=max1){max2=it.second;ans=it.first;}
        }
        return ans;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends