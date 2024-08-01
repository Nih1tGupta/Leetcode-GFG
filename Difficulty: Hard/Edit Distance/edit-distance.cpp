//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int t[101][101];
  int n;int m;
      int solve(string &str1, string &str2,int i,int j){
          n=str1.length(); m=str2.length();
          if(i==n){return m-j;}
          if(j==m){return n-i;}
          if(t[i][j]!=-1){return t[i][j];}
          if(str1[i]==str2[j]){return t[i][j]=solve(str1,str2,i+1,j+1);}
          else{
              int ins=1+solve(str1,str2,i,j+1);
              int del=1+solve(str1,str2,i+1,j);
              int rep=1+solve(str1,str2,i+1,j+1);
               return t[i][j]=min({ins,del,rep});
          }
         return -1;
      }
    int editDistance(string str1, string str2) {
        // Code here
        memset(t,-1,sizeof(t));
         n=str1.length();  m=str2.length();
        return solve(str1,str2,0,0);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends