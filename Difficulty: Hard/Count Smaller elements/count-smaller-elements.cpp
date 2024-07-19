//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
    //     vector <int> res;
    // for(int i=0; i<arr.size(); i++) {
    //     int counter = 0;
    //     for(int j=i; j<arr.size(); j++) {
    //         if(arr[i]>arr[j]) {
    //             counter++;
    //         }
    //     }
    //     res.push_back(counter);
    // }
    // return res;
     int n = arr.size();
        vector<int> sortedVec(arr.begin(), arr.end());
        sort(sortedVec.begin(), sortedVec.end());
        vector<int> ans(n, 0);
        
        for (int i = 0; i < n; i++) {
            auto idx = lower_bound(sortedVec.begin(), sortedVec.end(), arr[i]);
            sortedVec.erase(idx);
            ans[i] = idx - sortedVec.begin();
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
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
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends