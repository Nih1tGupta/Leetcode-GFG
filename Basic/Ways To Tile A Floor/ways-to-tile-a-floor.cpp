//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int mod = 1e9 + 7;
    long long numberOfWays(long long N) {
        long long a = 1, b = 1, c;
        for(long long i=2;i<=N;i++) {
            c = (a + b)%mod;
            a = b, b =c;
        }
        return b;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}
// } Driver Code Ends