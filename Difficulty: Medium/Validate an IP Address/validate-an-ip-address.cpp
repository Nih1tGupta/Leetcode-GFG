//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string str) {
        // code here
       int c=0;
       string word="";
       int n=str.size();
       for(int i=0;i<n;i++){
           if(str[i]=='.'){
               int num=stoi(word);
               if(num>=0 and num<=255){c++;word="";}
           }
           else{word+=str[i];}
       }
       if(c==3){
           int num1=stoi(word);
           if(num1>=0 and num1<=255){c++;}
       }
       if(c==4)return 1;
       return 0;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends