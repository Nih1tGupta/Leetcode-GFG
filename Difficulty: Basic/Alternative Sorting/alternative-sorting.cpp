//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        int N=arr.size();
         sort(arr.begin(),arr.end(),greater<int>());
	    vector<int>v;
	    int i=0,j=N-1;
	    while(i<j){
	        v.push_back(arr[i++]);
	        v.push_back(arr[j--]);
	    }
	    if(N%2!=0){
	        v.push_back(arr[N/2]);
	    }
	    return v;
	    
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
        Solution obj;
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends