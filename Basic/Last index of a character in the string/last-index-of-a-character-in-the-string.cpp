//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int LastIndex(string s, char p){
            int count;
        if(s.size()==1 && s[0]!=p){
            return -1;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]==p){
                count=i;
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}


// } Driver Code Ends