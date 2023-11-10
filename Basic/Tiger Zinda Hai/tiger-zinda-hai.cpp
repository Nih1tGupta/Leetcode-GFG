//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int count_tabs(string arr[], int n) {
        unordered_set<string> set;
    for(int i=0; i<n; i++) {
        if(arr[i] == "END") { 
            set.clear();
            continue;
        }
        if(set.find(arr[i]) != set.end()) { 
            set.erase(arr[i]);
        }
        else set.insert(arr[i]); }
    return set.size();

    }
};


//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>> n;
	    string arr[n+1];
	    
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	   Solution ob;
	   cout << ob.count_tabs(arr, n) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends