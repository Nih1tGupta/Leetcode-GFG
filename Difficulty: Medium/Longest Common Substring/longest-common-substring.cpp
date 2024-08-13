//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        // your code here
         int maxLen = 0;
        string str;
        
        
        for(int i=0;i<str1.size();i++){
            str = "";
            for(int j=i;j<str1.size();j++){
                str += str1[j];
                if(str2.find(str) <= str2.size()){
                    maxLen = max(maxLen,j-i+1);
                }
            }
        }
        
        return maxLen;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends