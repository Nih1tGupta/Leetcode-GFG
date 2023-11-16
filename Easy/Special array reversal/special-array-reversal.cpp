//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        int i=0;int j= str.size()-1;
         while(i<j){
             if(isalpha(str[i]) && isalpha(str[j])){
                 swap(str[i] , str[j]);    i++;j--; }
             else if(isalpha(str[i]) && !isalpha(str[j])){ j--;}
             else{ i++;}
         }
         return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends