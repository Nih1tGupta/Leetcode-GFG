//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isDivisible(int N) {
         int sum = 0,orig = N;
        while(N){
            sum += N%10;
            N /= 10;
        }
       if(orig%sum !=0){return 0;}
       return 1;
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
        cout << ob.isDivisible(N) << "\n";
    }
}
// } Driver Code Ends