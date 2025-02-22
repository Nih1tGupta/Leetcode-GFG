//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxLength(string& s) {
    //   stack<int>st;
    //   st.push(-1);
    //   int maxi=0;
    //   for(int i=0;i<s.length();i++){
    //       if(s[i]=='('){st.push(i);}
    //       else{
    //           st.pop();
    //           if(st.empty()){st.push(i);}
    //           else{
    //               int len=i-st.top();
    //               maxi=max(maxi,len);
    //           }
            
    //       }
           
    //   }
    //   return maxi;
    int n=s.length();
    vector<int>dp(n,0);
    for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                if(i-1>=0){
                    if(s[i-1]=='('){dp[i]=dp[max(i-2,0)]+2;}
                    else{
                        if(i-1-dp[i-1]>=0 and s[i-1-dp[i-1]]=='('){
                            dp[i]=dp[i-1]+2+dp[max(0,i-1-dp[i-1]-1)];
                        }
                    }
            }
            }
    }
    return *max_element(dp.begin(),dp.end());
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends