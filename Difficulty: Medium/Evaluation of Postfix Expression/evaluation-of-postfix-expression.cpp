//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int evaluate(vector<string>& arr) {
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            string s1=arr[i];
            if(s1=="+"||s1=="-"||s1=="*"||s1=="/"){
                int a=st.top(); st.pop();
                int b=st.top(); st.pop();
                int c;
                if(s1=="+"){c=a+b;}
                else if(s1=="-"){c=b-a;}
                else if(s1=="*"){c=b*a;}
                else{c=b/a;}
                st.push(c);
            }
            else{
                st.push(stoi(s1));
            }
        }
        return st.top();
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends