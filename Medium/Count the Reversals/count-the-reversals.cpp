//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
   int n=s.length();
   if(n%2!=0){return -1;}
   
   stack<char>st;
   for(int i=0;i<n;i++){
     if( s[i]=='}' and !st.empty() ){
         if(st.top()=='{'){st.pop();}
         else{st.push(s[i]);}
         }
     else{st.push(s[i]);}
   }
  int n1=0;
  int size= st.size();
  while(!st.empty() and st.top()=='{'){st.pop();n1++;}
     return (size/2+ n1%2);
     
   
}