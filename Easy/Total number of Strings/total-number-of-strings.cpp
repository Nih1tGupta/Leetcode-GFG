//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
   	int no_ofString(int n){
   	    
   	 long m= 1000000007;

         long Ans=1+2*(n%m)+((n%m)*((n%m)-1)*((n%m)+1)/2);

         long h=Ans%m;

         return (int)h;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.no_ofString(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends