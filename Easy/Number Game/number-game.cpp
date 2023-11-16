//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   long long lcm(long long a, long long b){
        return (a * b) / __gcd(a, b);
    }
    long long numGame(long long n) {
        long long ans = 1;
        for (long long i = 1; i<=n; i++){
            ans = lcm(ans, i);
            ans = ans % 1000000007;
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        
        cin>>n;

        Solution ob;
        cout << ob.numGame(n) << endl;
    }
    return 0;
}
// } Driver Code Ends