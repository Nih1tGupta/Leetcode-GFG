//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        unordered_map<char,int>mp;
        for(auto &it:s){mp[it]++;}
        int x=0;int y=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            int pos=it->first-'a'+1;
            if(pos%2==0 and it->second%2==0){x++;}
                if(pos%2!=0 and it->second%2!=0){y++;}
        }
        if (x+y&1){return "ODD";}
        return "EVEN";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends