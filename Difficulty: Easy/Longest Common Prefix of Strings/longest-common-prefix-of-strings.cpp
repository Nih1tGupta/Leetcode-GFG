//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin(),arr.end());
        string s= "";
        string l=arr[0]; string r=arr[arr.size()-1];
        for(int i=0;i<l.size();i++){
            if(l[i]==r[i]){s.push_back(l[i]);}
            else{break;}
        }
        return (s.length()==0)?"-1":s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends