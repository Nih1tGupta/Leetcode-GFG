//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        if(arr.size()==1)return -1;
        if(arr.size()==2)return (arr[0]+arr[1]);
        int n=arr.size();
        int maxi=arr[0]+arr[1];
       for(int i=1;i<n-1;i++){
           int cs=arr[i]+arr[i+1];
           maxi=max(maxi,cs);
       }
       return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> a;
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        int res = obj.pairWithMaxSum(a);
        cout << res << endl;
    }
}
// } Driver Code Ends