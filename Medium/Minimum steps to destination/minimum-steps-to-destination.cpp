//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
//   int solve(int src, int ctr, int dest){
//      if(abs(src) > (dest)){
//             return INT_MAX;
//         }
//         if(src == dest){
//             return ctr-1;
//         }
//         int l = solve(src+ctr,ctr+1,dest);
//         int r = solve(src-ctr,ctr+1,dest);
//         return min(l,r);
//     }
    int minSteps(int D){
        // code here
        // int x = solve(0,1,D);
        // return x;
        int temp=0, ans=0;
        while(D>temp){ans++;temp+=ans;}
        if(temp==D){return ans;}
        int diff=temp-D;
        if(diff%2==0){return ans;}
        return ans%2==0?ans+1:ans+2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends