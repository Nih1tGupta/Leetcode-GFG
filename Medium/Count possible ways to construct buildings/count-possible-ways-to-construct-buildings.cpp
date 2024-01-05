//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    long long int mod = 1e9+7;
	    if(N==1){return 4;}
	    if(N==2){return 9;}
	    int prev_one=3;int prev_two=2;long long res=0;
	    for(int i=3;i<=N;i++){
	        res=(prev_one + prev_two+mod)%mod;
	        prev_two=prev_one;
	        prev_one=res;
	    }
	    long long ans= ((res%mod)*(res%mod))%mod;
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends