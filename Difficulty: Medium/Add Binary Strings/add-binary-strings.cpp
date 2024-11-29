//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        reverse(s1.begin(),s1.end()); reverse(s2.begin(),s2.end());
        string s="";int c=0;
        int i=0;int j=0;
        while(i<s1.length()and j<s2.length()){
            int sum=(s1[i]-'0') +(s2[j]-'0')+c;
            c=sum/2; s.push_back((char)(sum%2+'0'));
            i++;j++;
        }
        while(i<s1.length()){int sum=(s1[i]-'0')+c;c=sum/2;s.push_back((char)(sum%2+'0'));i++;}
        while(j<s2.length()){int sum=(s2[j]-'0')+c;c=sum/2;s.push_back((char)(sum%2+'0'));j++;}
        if(c){s.push_back((char)(c+'0'));}
        while(s.size()>1 and s.back()=='0'){s.pop_back();}
        reverse(s.begin(),s.end());
        return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends