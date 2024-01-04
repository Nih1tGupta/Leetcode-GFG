//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
       int x=-1,y=-1,z=-1;int n=S.length();
       int mini=INT_MAX;
       for(int i=0;i<n;i++){
           if(S[i]=='0'){x=i;}
            else if(S[i]=='1'){y=i;}
            else if(S[i]=='2'){z=i;}
            if(x==-1 or y==-1 or z==-1){continue;}
            int maxii=max({x,y,z});
             int minii=min({x,y,z});
             mini = min(mini,maxii-minii+1);
       }
       if(mini==INT_MAX){return -1;}
      return mini;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends