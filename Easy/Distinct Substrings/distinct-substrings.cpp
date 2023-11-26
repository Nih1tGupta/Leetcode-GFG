//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}
// } Driver Code Ends


int fun(string s)
{
    unordered_set<string> st;
  for(int i=0;i<(s.size()-1);i++)
  {
     string str;
         str+=s[i];
         str+=s[i+1];
     st.insert(str);
  }
    return st.size();
    
}