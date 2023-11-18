//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        void sortHalves (int arr[], int n)
        {
          sort(arr,arr+n);
        }
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
		int arr[n];

		for (int i = 0; i < n; ++i)
			cin >> arr[i];
        
        Solution ob;
        
		ob.sortHalves (arr, n);
		for (int i = 0; i < n; ++i)
			cout << arr[i] << " ";
		cout << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends