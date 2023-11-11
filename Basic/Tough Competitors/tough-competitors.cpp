//{ Driver Code Starts
//Initial Template for C++





#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int toughCompetitor(int *arr, int n) {
      sort(arr,arr+n);
        int min = arr[1] - arr[0];
        for(int i=1;i<n-1;i++){
            if(arr[i+1]-arr[i]<min){
                min = arr[i+1]-arr[i];
            }
        }
        return min;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        auto ans = obj.toughCompetitor(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends