//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy11 (string S)
	  {
        int odd = 0, even = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if (i % 2){ odd += (S[i] - '0');}
            else {even += (S[i] - '0');}
        }
       return (odd - even) % 11 == 0;
}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy11 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends