//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Find the sum of all non-repeated elements
	// in an array
	int findSum(int arr[], int n) {long long  sum=0;
	sort(arr,arr+n);
	    for(long long  i=0;i<n;i++){
	        if(arr[i]!=arr[i+1]){sum+=arr[i];}
	    }
	    return sum;
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
        Solution ob;
        auto ans = ob.findSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends