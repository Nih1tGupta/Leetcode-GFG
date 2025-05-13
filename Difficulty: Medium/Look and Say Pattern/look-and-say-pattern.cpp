//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string countAndSay(int n) {
        // code here
        if(n==1)return "1";
        if(n==2)return "11";
        string s="11";
        for(int i=3;i<=n;i++){
            string t="";
            int ct=1;
            for(int j=1;j<=s.length();j++){
                if(s[j]!=s[j-1]){
                    t+=to_string(ct);t+=s[j-1];ct=1;
                }
                else{ct++;}
            }
            s=t;
        }
        return s;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.countAndSay(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends