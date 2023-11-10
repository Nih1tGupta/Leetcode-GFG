//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int findDiff(int arr[], int n) {
        unordered_map<int,int>mp;
int mini=INT_MAX;int maxi=INT_MIN;
for(int i=0;i<n;i++){  mp[arr[i]]++;}
for(int i=0;i<n;i++)
{
   int A= mp[arr[i]];
     mini=min(mini,A);
     maxi=max(maxi,A);
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
        int arr[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.findDiff(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends