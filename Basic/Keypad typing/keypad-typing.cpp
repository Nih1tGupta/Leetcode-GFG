//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}
// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
  string tp="";
    for(int i=0;i<n;i++){
        if(s[i]>='a'&&s[i]<='c')
            tp+='2';
        else if(s[i]>='d'&&s[i]<='f')
            tp+='3';
        else if(s[i]>='g'&&s[i]<='i')
            tp+='4';
        else if(s[i]>='j'&&s[i]<='l')
            tp+='5';
        else if(s[i]>='m'&&s[i]<='o')
            tp+='6';
        else if(s[i]>='p'&&s[i]<='s')
            tp+='7';
        else if(s[i]>='t'&&s[i]<='v')
            tp+='8';
        else if(s[i]>='w'&&s[i]<='z')
            tp+='9';
    }
    return tp;
}
