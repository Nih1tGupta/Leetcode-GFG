//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        int n=str1.length();int m=str2.length();int i=0;
        if(n!=m){return 0;}
          unordered_map<char , char> mp1;  unordered_map<char , char> mp2;
          for(int i = 0 ; i<n ; i++){
            if(mp1.find(str1[i]) == mp1.end() && mp2.find(str2[i]) == mp2.end()){
                mp1[str1[i]] = str2[i];
                mp2[str2[i]] = str1[i];
            }else if(mp1.find(str1[i]) != mp1.end()){
                if(mp1[str1[i]] != str2[i]){
                    return false;
                }
            }
            else if(mp2.find(str2[i]) != mp2.end()){
                if(mp2[str2[i]] != str1[i]){
                    return false;
                }
            }
        }
        return true;
    }
        
    
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends