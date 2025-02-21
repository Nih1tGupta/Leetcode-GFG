//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string x)
    {
        // Your code here
        stack<char>st;
        for(int i=0;i<x.length();i++){
            char ch=x[i];
            if(ch=='('|| ch=='{'||ch=='['){st.push(ch);}
            else{
             if(!st.empty()){
                 char top = st.top();
                 if((ch ==')' and top =='(') || (ch =='}' and top =='{')|| (ch ==']' and top =='[')){
                     st.pop();
                 }
                 else{
                     return false;
                 }
             }
                else{return false;}
            }
        }
        return (st.size()==0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends