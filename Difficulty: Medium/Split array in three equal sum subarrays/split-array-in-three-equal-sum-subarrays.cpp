//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        // sum%3==0
        // v.size()==2
        // 1 3 4 0 4
        int s=0;int n=arr.size();vector<int>vv;
        for(auto it:arr){s+=it;}
        if(s%3!=0)return {-1,-1};
        int i=0;int x=0;
        while(i<n and vv.size()!=2){
            x+=arr[i];
            if(x==s/3){vv.push_back(i);x=0;}i++;
        }
        if(vv.size()==2)return {vv[0],vv[1]};
        return {-1,-1};
    }
};

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends