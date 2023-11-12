//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long isAmazing(long long n){
       int res=2;
          for(int i = 2;i<n;i++){
            if(n % i == 0){
                res++;
            }
            if(res > 3)
                return 0;
            }
        
        if (res==3){
            return 1;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout << ob.isAmazing(n) << endl;
    }
    return 0;
}

// } Driver Code Ends