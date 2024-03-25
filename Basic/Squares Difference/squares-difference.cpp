//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    long long int squaresDiff(int N){
      long long int square_sum =  (N*(N+1)*(2*N+1))/6;
        long long int natural_sum = N*(N+1)/2;
        long long natural_sum_square = natural_sum * natural_sum;;
        long long int ans = square_sum - natural_sum_square;
        return abs(ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.squaresDiff(N) << endl;
    }
    return 0;
}

// } Driver Code Ends