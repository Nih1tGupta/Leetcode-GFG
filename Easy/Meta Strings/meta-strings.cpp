//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



bool metaStrings (string S1, string S2)
{
    if(S1.length()!=S2.length()){return false;}
    // unordered_map<char,int>mp;
    // for(int i=0;i<S1.length();i++){mp[S1[i]]++;}
    //  for(int i=0;i<S2.length();i++){mp[S2[i]]++;}
     
    int count=0;
    for(int i=0;i<S1.length();i++){
        if(S1[i]!=S2[i]){count++;}
    }
     sort(S1.begin(),S1.end());
    sort(S2.begin(),S2.end());
    
    if(S1!=S2)
        return(false);
    return(count==2);
}