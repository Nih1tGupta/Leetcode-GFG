//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
   
  string reverse(string S,int len)
{
   stack<char>st;
    
   for(int i=0;i<len;i++){
       st.push(S[i]);
   }
   int j=0;
   while(!st.empty()){
       S[j]=st.top();
      j++;
      st.pop();
   }
   return S;
}


    string reverseAlternate(string str)
{
    string ans="", h="";
    int count = 0;
   for(int i=0;i<str.length();i++){
       if(str[i] == ' ') {
           if(count&1){
                ans+=reverse(h ,h.length());
           }else{ans+=h;}
          ans += " ";
           count++;
           h = "";
       }
       else{h+=str[i];}
   }
   if(count&1) {
        ans+=reverse(h ,h.length());
        ans += " ";
        count++;
        h = "";
       }
       else{
           ans += h;
           ans += " ";
           count++;
           h = "";
       }
   return ans;
}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.reverseAlternate(str)<<endl;
    }
    return 0;
}

// } Driver Code Ends