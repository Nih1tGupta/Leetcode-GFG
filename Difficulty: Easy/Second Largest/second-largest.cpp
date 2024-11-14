//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // unordered_set<int>st;
        // for(auto &it:arr){st.push(it);}
        // if(st.size()==1)return -1;
        // vector<int>v;
        // while(!st.empty()){v.push_back(st.top());st.pop();}
        // sort(v.begin(),v.end());
        // int n=v.size();
        // return v[n-1];
        // brute
        //  space-0(n)
        // l and sl(effecienr-- o(n)) + no space
        int l=INT_MIN;int sl=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>l){sl=l;l=arr[i];}
            else if(arr[i]>sl and arr[i]!=l){sl=arr[i];}
        }
        return sl==INT_MIN?-1:sl;
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
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends