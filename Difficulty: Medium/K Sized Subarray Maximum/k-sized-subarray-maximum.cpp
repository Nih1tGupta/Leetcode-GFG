//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        vector<int>v;
        int n=arr.size();
        int i=0;int j=0;
        map<int,int>mp;
        int maxi=0;
        while(i<n and j<n){
           mp[arr[j]]++;
           if(j-i+1==k){
               auto it=*mp.rbegin();
               v.push_back(it.first);
               mp[arr[i]]--;
               if(mp[arr[i]]==0){mp.erase(arr[i]);}
               i++;
           }
           j++;
        }
        return v;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution obj;
        vector<int> res = obj.maxOfSubarrays(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends