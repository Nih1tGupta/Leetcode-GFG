//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxPartitions(string &s) {
        // code here
        vector<int>mp(26,-1);
        int n=s.length(); int c=0;
        for(int i=0;i<n;i++){
            int idx=s[i]-'a';
            mp[idx]=i;
        }
        int i=0;int end=0;
        while(i<n){
             end= max(end,mp[s[i]-'a']);
             int j=i;
             while(j<end){
                 end= max(end,mp[s[j]-'a']);
                 j++;
             }
             c++;
             i=j+1;
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.maxPartitions(s) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends