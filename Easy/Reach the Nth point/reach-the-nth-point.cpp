//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    if(n==1){return 1;}
        int n1=1;int n2=1;int count=0;
        for(int i=2;i<=n;i++){
        count=(n1+n2)%1000000007;
        n1=n2;
        n2=count;
        }
        return count;
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
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends