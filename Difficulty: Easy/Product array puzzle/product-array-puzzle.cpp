//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
        // for(int i=0; i<n; i++){
        //     int product=1; 
        //     for(int j=0; j<n; j++){
        //         if(i!=j){
        //             product=product*arr[j];
        //         }}
        //     ans.push_back(product);}
        int c=0;
        int pwz=1;
        for(int i=0;i<n;i++){
            if(arr[i]==0){c++;}
            else{pwz*=arr[i];}
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                if(c>0){ans[i]=0;}
                else{ans[i]=pwz/arr[i];}
            }
            else{
                if(c>1){ans[i]=0;}
                else{ans[i]=pwz;}
            }
        }
            return ans;
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

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends