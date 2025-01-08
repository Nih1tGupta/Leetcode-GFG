//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // o(n^3)
        // o(n+nlogn)
        int c=0;sort(arr.begin(),arr.end());
        for(int i=arr.size()-1;i>=0;i--){
            int s=0;int e=i-1;
            while(s<e){
                if(arr[s]+arr[e]>arr[i]){c+=(e-s);e--;}
                else{s++;}
            }
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends