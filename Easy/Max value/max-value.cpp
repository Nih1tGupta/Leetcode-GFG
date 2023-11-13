//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxVal(int a[], int n){
         int maxi =INT_MIN;
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            if( a[i]-i >maxi ){
                maxi=a[i]-i;
            }
            if(a[i]-i <mini){
                mini =a[i]-i;
            }
        }
        return maxi-mini;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.maxVal(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends