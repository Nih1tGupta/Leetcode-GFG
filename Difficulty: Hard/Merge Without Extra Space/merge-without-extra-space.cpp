//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
         vector<int> v;
        int i=0;
        int j=0;
        while(i<a.size() && j<b.size()){
            if(a[i] < b[j]){
                v.push_back(a[i]);
                i++;
            }else if(a[i] > b[j]){
                v.push_back(b[j]);
                j++;
            }else{
                v.push_back(a[i]);
                v.push_back(b[j]);
                j++;
                i++;
            }
        }
        
        while(i<a.size()){
            v.push_back(a[i]);
                i++;
        }
        
        while(j<b.size()){
             v.push_back(b[j]);
                j++;
        }
        
        int idx = 0;
        for(int i=0;i<a.size();i++){
            a[i] = v[idx];
            idx++;
        }
        for(int j=0;j<b.size();j++){
            b[j] = v[idx];
            idx++;
        
    }
    }
};

//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Inputting the test cases

    while (t--) {
        vector<int> a, b;

        // Reading the first array as a space-separated line
        string arr1;
        getline(cin >> ws, arr1); // Use ws to ignore any leading whitespace
        stringstream ss1(arr1);
        int num;
        while (ss1 >> num) {
            a.push_back(num);
        }

        // Reading the second array as a space-separated line
        string arr2;
        getline(cin, arr2);
        stringstream ss2(arr2);
        while (ss2 >> num) {
            b.push_back(num);
        }

        Solution ob;
        ob.mergeArrays(a, b);

        // Output the merged result
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends