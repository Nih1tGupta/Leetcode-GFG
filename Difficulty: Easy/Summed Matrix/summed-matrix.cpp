//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
       long long ans;
        if(n >= q-1)
        {
            ans = 2*(q/2) - (q%2 == 0);
        }
        else
        {
            long long diff = 2LL*n-q;
            ans = diff + 1;
        }
        return max(0LL,ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends