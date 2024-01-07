//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string S, int K){
        string a="";int count=0;
    	for(int i=S.size()-1;i>=0;i--){
    	    if(S[i] !='-'){
    	        a.push_back(toupper(S[i]));count++;
    	    
    	    if(count==K){a.push_back('-');count=0;}
    	    }
    	}
    	if(a.back()=='-'){
    	    a.pop_back();
    	}
    	reverse(a.begin(),a.end());
    	return a;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends