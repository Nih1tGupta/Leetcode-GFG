//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool solve(int i,int j,string &pattern,string &text,vector<vector<int>>&dp){
        //base case
        if(i<0 && j<0) return 1;
        if(i<0 && j>=0) return 0;
        if(j<0 && i>=0){
            for(int ind = 0; ind<=i; ind++){
                if(pattern[ind] != '*') return 0;
            }return 1;
        }
        if(dp[i][j] != -1) return dp[i][j];
    
        if(pattern[i] == text[j] || pattern[i] == '?') 
        return dp[i][j] = solve(i-1, j-1, pattern, text, dp);
        
        if(pattern[i] == '*') 
        return dp[i][j] = solve(i, j-1, pattern, text, dp) || 
        solve(i-1, j, pattern, text, dp);
        
        return dp[i][j] = 0;
    }
    bool wildCard(string &txt, string &pat) {
        // code here
         int n = pat.size(), m = txt.size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return solve(n-1, m-1, pat, txt, dp);

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, text;
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text;
        Solution obj;
        bool ans = obj.wildCard(text, pat);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends