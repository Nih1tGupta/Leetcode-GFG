//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     long long sum(long long n){
      return (n*(n+1))%1000000007;
  }
    long long modifiedSum(int N, int M, int K) {
        long long int ans=0;
      long long a=N+K;
        for(int i=1;i<=M;i++){
            ans=sum(a);
          a=ans+K;
        }
        return ans;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> N >> M >> K;
        Solution ob;
        cout << ob.modifiedSum(N, M, K) << "\n";
    }
}
// } Driver Code Ends