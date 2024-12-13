//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int n=arr.size();
        int l=0;int h=n-1;
        while(l<h){
            int mid= l-(l-h)/2;
            if(arr[mid]==key)return mid;
            if(arr[l]<=arr[mid]){
                if(arr[l]<=key and key <=arr[mid]){h=mid-1;}
                else{l=mid+1;}
            }
            else if(arr[mid]<=arr[h]){
                if(arr[mid]<=key and key <=arr[h]){l=mid+1;}
                else{h=mid-1;}
            }
        }
        return (arr[l]!=key)?-1:l;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends