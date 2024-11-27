//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here 0 1 1 2 4 7
          int k=1;
        sort(arr.begin(),arr.end());//MAKE  ALL NEGATIVE NUBMERS 0
        int n=arr.size();
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i]<=0)
            {
                arr[i] = 0;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
               k++;
           
        }
        return k;
    }
};

//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main() {

    // taking testcases
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
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
    return 0;
}
// } Driver Code Ends