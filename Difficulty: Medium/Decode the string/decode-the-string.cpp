//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        stack<char>st;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]==']'){
                while(!st.empty() and st.top()!='['){
                    ans=st.top()+ans;
                    st.pop();
                }
                if(!st.empty()){st.pop();}
                string num="";
                while(!st.empty() and st.top()>='0' and st.top()<='9'){
                    num=st.top()+num;
                    st.pop();
                }
                int digit=stoi(num);
                string temp=ans;
                for(int i=0;i<digit-1;i++){
                    ans+=temp;
                }
                for(int i=0;i<ans.length();i++){
                    st.push(ans[i]);
                }
                ans="";
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
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

        Solution ob;
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends