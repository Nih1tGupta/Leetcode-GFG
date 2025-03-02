//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
        int l=0;int maxi=0;
        int idx=0;
        multiset<int>st;
        for(int r=0;r<arr.size();r++){
            st.insert(arr[r]);
            while(*st.rbegin()-*st.begin()>x){
                st.erase(st.find(arr[l]));
                l++;
            }
            if(r-l+1>maxi){
                maxi=r-l+1;
                idx=l;
            }
       }
       return vector<int>(arr.begin()+idx,arr.begin()+idx+maxi);
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
        Solution ob;
        vector<int> ans = ob.longestSubarray(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends