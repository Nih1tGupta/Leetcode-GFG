//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
         string s="";
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='b')
                continue;
            if(str[i]=='a' && str[i+1]=='c'){
                i++;
                continue;}
            s+=str[i];
            
        }
        return(s);
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends