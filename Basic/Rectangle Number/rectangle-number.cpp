//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    long long rectNum(long long N, long long M) {
    const unsigned int A = 1000000007;
       long long a= (M * N * (N + 1) * (M + 1)) / 4;
       
       return a % A;
   }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N, M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.rectNum(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends