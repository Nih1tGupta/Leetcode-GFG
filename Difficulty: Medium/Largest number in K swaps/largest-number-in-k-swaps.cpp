//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to find the largest number after k swaps.
    string findMaximumNum(string& s, int k) {
       int n=s.length();
       for(int i=0;i<n && k>0;i++){
           char maxi=s[i]; int idx=i;
           for(int j=n-1;j>i;j--){
               if(s[j]>maxi){
                   maxi=s[j]; idx=j;
               }
           }
           if(maxi>s[i]){
               s[idx]=s[i];
               s[i]=maxi;
               k--;
           }
       }
       return s;
    }
};


//{ Driver Code Starts.

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends