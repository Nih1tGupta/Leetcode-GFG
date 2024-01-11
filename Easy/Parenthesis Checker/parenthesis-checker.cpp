//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
       stack<char>st;
       for(int i=0;i<x.length();i++){
          char ch=x[i];
          if(ch=='(' || ch=='{' || ch=='['){st.push(ch);}
          else{
              if(!st.empty()){
                  char top = st.top();
                  if(ch ==')' and top =='('|| ch =='}' and top =='{' || ch ==']' and top =='['){ st.pop();}
                  else{
                      return false;
                  }
                
              }
              else{
                return false;
              }
          }
       
    }
    if(st.empty()){return true;}
    return false;
}
};
 

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends