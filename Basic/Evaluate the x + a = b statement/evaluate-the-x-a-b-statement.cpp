//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	int Evaluate(string str){
   	    // Code here 
   	  
    return stoi( str.substr( str.find( '=' ) + 1 )) - stoi( str.substr( str.find( '+' ) + 1 ));
    }    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	while(tc--){
		string str;
		getline(cin, str);
		Solution ob;
		int ans = ob.Evaluate(str);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends