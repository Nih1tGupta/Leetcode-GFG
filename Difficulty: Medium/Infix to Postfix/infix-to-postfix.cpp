//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        // Your code here
        stack<char>st;
        map<char,int>mp;
        mp['^']=5;mp['*']=4;mp['/']=4;mp['+']=3;mp['-']=3;
        string res;
        for(auto it:s){
            if(isalpha(it) || (it>='0' and it<='9')){res+=it;}
            else if(it=='('){st.push(it);}
            else if(it==')'){
                while(!st.empty() and st.top()!='('){res+=st.top();st.pop();}
                st.pop();
            }
            else{
                while(!st.empty() and mp[it]<=mp[st.top()]){res+=st.top();st.pop();}
                st.push(it);
            }
        }
        while(!st.empty()){res+=st.top();st.pop();}
        return res;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends