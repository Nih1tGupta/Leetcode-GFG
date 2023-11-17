//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int getAngle(int H , int M) {
        const auto angle{ abs( 30 * H - 5.5 * M )};
    return min( 360-angle,angle );
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int H,M;
        
        cin>>H>>M;

        Solution ob;
        cout << ob.getAngle(H,M) << endl;
    }
    return 0;
}
// } Driver Code Ends