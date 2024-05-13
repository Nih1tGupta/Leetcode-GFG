//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void solve(vector<int>&a,vector<vector<int>>&v,vector<int>&s,int i){
    if(i>=a.size())
    {  v.push_back(s);
      return ;
    }
   s.push_back(a[i]);
   solve(a,v, s, i+1);
   s.pop_back();
   solve(a,v, s, i+1);
      
  }
    vector<vector<int> > subsets(vector<int>& a) {
       vector<vector<int>>v;
       vector<int>s;
       solve(a,v,s,0);
      sort(v.begin(),v.end());
    return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        vector<int> array;
        for (int i = 0; i < n; i++) {
            cin >> x;
            array.push_back(x);
        }

        Solution ob;
        vector<vector<int> > res = ob.subsets(array);

        // Print result
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}
// } Driver Code Ends