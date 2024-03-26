//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool f(int a, int b, int idx, string &s, int len){
        if(idx == len) return true;
        
        int c = 0;
        for(int i=idx; i<len; i++){
            c = c*10 + s[i]-'0';
            if(a+b == c){
                if(f(b,c,i+1,s,len)) return true;
            }
        }
        return false;
    }
    
    bool isAdditiveSequence(string n) {
        int len = n.length();
        
        int a = 0;
        for(int i=0; i<len-2; i++){
            a = a*10 + n[i]-'0';
            int b = 0;
            for(int j=i+1; j<len-1; j++){
                b = b*10 + n[j]-'0';
                if(f(a,b,j+1,n,len)) return true;    
            }
        }
        return false;
        // Your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    Solution sol;

    while (t--) {
        string s;
        cin >> s;

        bool result = sol.isAdditiveSequence(s);
        cout << result << endl;
    }

    return 0;
}

// } Driver Code Ends