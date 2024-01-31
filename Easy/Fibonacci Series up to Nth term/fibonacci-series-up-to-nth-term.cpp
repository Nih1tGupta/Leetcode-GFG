//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> Series(int N) {
        vector<long long >fib;
        if(N==0 || N==1) {
            fib.push_back(0);
            fib.push_back(1);
        }
        
        else{
            
            fib=Series(N-1);
            fib.push_back(fib[N-1] + fib[N-2]);
            
        }
            
            return fib;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends