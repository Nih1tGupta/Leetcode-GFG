//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
          int n = wt.size();
        vector<vector<int>>dp(W+1, vector<int>(n+1,-1));
        
        for (int i=0; i<=W; i++){
            for (int j=0; j<= n; j++){
                if (i==0 || j==0){
                    dp[i][j] = 0;
                }
            }
        }
        
        for (int i=1 ;i<=W; i++){
            for (int j=1; j<= n; j++){
                if (i >= wt[j-1]){
                    dp[i][j] = max(val[j-1]+dp[i-wt[j-1]][j-1], dp[i][j-1]);
                }
                else{
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
        
        return dp[W][n];
    }
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends