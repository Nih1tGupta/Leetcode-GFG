//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) 
	{sort(arr,arr+n);
        vector<int>v;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0)
                v.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0)
                v.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            arr[i]=v[i];
        }
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
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends