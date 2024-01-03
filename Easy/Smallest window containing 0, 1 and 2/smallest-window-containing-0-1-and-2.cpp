//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
         if(S.size()<3) return -1;
        int ans = INT_MAX;
        
        char p = S[0];
        int l = 1;
        for(int i=1;i<S.size()-1;i++){
            char c = S[i];
            char n = S[i+1];
            if(c==n){
                l++;
            }else if(p==c || p==n){
                l=1;
                p=c;
            }else{
                ans = min(ans,l+2);
                l=1;
                p=c;
            }
        }
        
        return ans==INT_MAX?-1:ans;
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