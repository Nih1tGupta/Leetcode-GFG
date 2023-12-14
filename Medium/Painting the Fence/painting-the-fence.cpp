//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long countWays(int n, int k){
        long long M=1e9+7;
        if(n==1)return k;
        long long prev=0,curr=k;
        long long ans = prev+curr;
        for(int i=2;i<=n;i++){
            prev=curr;
            curr=(ans*(k-1))%M;
            ans=prev+curr;
        }
        return ans%M;
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends