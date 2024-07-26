//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        int mp[26]={0};
        int len=0;int count=0;
        for(int i=0;i<str.length();i++){
            if(str[i]!=' '){mp[str[i]-'a']++;len++;}
        }
        for(int i=0;i<26;i++){
            if(mp[i]==0){count++;}
        }
        return (count<=k and len>=26);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends