//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  const int mod=1e9+7;
    int tabuSpaceOptimized(int n){
        int prev = 1;
        int curr = 1;
        
        for(int i=2;i<=n;i++){
            int ans = prev+curr;
            prev = curr;
            curr = ans;
        }
        return curr;
    }
    int countWays(int n) {
        // your code here

        int ans = tabuSpaceOptimized(n);
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends