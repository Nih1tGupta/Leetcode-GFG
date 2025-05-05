//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        // code here
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]==target)return i;
        // }
        // return -1;
        int l=0;int r=arr.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(arr[m]==target)return m;
            if(m>l and arr[m-1]==target){return m-1;}
            if(m<r and arr[m+1]==target){return m+1;}
            if(arr[m]>target){r=m-2;}
            else{l=m+2;}
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        int target;
        cin >> target;
        cin.ignore();
        Solution sln;
        int ans = sln.findTarget(arr, target);
        cout << ans << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends