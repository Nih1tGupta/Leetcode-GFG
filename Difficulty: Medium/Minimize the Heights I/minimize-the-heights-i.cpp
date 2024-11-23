//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end()); int min_diff = arr[n-1] - arr[0];
        int maxi, mini;
        for(int i=1;i<n;i++) {
            mini = min(arr[i]-k, arr[0]+k);
            maxi = max(arr[i-1]+k, arr[n-1]-k);
            min_diff = min(min_diff, maxi-mini);
        }
        
        return min_diff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();

    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.getMinDiff(k, arr);
        cout << res;

        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends