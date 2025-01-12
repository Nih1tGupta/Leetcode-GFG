//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
        vector<int>get_l(vector<int>&arr){
            int n=arr.size();
            vector<int>v(n,0);v[0]=arr[0];
            for(int i=1;i<n;i++){
                v[i]=max(arr[i],v[i-1]);
            }
            return v;
        }
        
         vector<int>get_r(vector<int>&arr){
            int n=arr.size();
            vector<int>v(n,0);v[n-1]=arr[n-1];
            for(int i=n-2;i>=0;i--){
                v[i]=max(arr[i],v[i+1]);
            }
            return v;
        }
    int maxWater(vector<int> &arr) {
        
        vector<int>l=get_l(arr);
        vector<int>r=get_r(arr);
        int s=0;    int n=arr.size();
        for(int i=0;i<n;i++){
            s+=min(l[i],r[i])-arr[i];
        }
        return s;
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
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends