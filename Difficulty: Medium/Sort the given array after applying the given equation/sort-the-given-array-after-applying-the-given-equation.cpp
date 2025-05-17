//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int calc(int x,int A,int B,int C){
        int y=x*x;
        y*=A;
        int z=x*B;
        return C+y+z;
    }
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        // code here
        int n=arr.size();
        vector<int>v(n,0);
        for(int i=0;i<arr.size();i++){
            v[i]= calc(arr[i],A,B,C);
        }
        sort(v.begin(),v.end());
        return v;
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

        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        int a, b, c;
        cin >> a >> b >> c;
        cin.ignore();

        Solution obj;
        vector<int> ans = obj.sortArray(arr, a, b, c);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << ' ';
        cout << endl;

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends