//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
int maxSumIS(int arr[], int n){
        vector<int> temp(arr, arr+n);
        int ans = *max_element(temp.begin(), temp.end());
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(arr[i]>arr[j])
                {
                    temp[i] = max(temp[i], temp[j] + arr[i]);
                    ans = max(temp[i], ans);
                }
            }
        }
        return ans;
    }   
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends