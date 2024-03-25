//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    string str="";
    reverse(s.begin(),s.end());
    for(auto i:s)
        if(str.find(i)==string::npos)
            str+=i;
    for(int i=0;i<s.length();i++)
        if(str[i]==' ')
            str[i]=0;
    
    return str;
}