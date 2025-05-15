//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countSubstring(string &s) {
        // code here
        int i=0;int j=0;int c=0;
        int n=s.length();
        map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(auto &it:mp){
            if(it.second){
                c+=(it.second + (it.second)*(it.second-1)/2);
            }
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.countSubstring(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends