//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int oddAndEven(string S) {
          // code here
        int ans = 0;
        for(int i=0;i<S.size();i++){
            if(i%2==0)
                ans += S[i] - '0';
            else
                ans -= S[i] - '0';
        }
        if(ans == 0)
            return 1;
        return 0;
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
        cout << ob.oddAndEven(S) << "\n";
    }
}
// } Driver Code Ends