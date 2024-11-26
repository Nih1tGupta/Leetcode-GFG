//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        int s1=0;
       int s2=0;
       int ts=0;
       int ms=INT_MIN;
       int mns=INT_MAX;
       for(int i=0;i<arr.size();i++)
       {
           ts+=arr[i];
           s1+=arr[i];
           s2+=arr[i];
           if(s1<0) s1=0;
           if(s2>0) s2=0;
           ms=max(ms,s1);
           mns=min(mns,s2);
       }
       return max(ms,ts-mns);
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends