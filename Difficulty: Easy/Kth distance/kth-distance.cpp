//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
       int n = arr.size();
        for(int i =0; i<n; i++){
            int val = arr[i];
            for(int j =i+1; j<=i+k  &&  j<n; j++){if(arr[j] ==val){return true;}}}
        return false;
        //  unordered_map<int, int> hash;
        // for(int i=0; i<arr.size(); i++){
        //     // duplicate
        //     if(hash.find(arr[i]) != hash.end()){
        //         int dist = i - hash[arr[i]];
        //         if(dist <= k) return true;
        //     }
        //     hash[arr[i]] = i;
        // }
        // return false;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        bool res = obj.checkDuplicatesWithinK(arr, k);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        // cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends