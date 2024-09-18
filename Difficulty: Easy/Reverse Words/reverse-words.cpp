//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string S) {
        // code here
        string words; string ans;
       
        int n =S.length()-1;
        for(int i=n; i>=0; i--)
        {
            if(S[i]!='.')
            {
                words.push_back(S[i]);
                    if((i>0 && S[i-1]=='.') || (i==0))
                    {
                        for(int j=words.length()-1; j>=0; j--)
                        {
                            ans.push_back(words[j]);
                        }
                        ans.push_back('.');
                        words.clear();}}}
        ans.pop_back();
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends