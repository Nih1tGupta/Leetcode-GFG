//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		long long int sum(int N)
		{
		     N=N-1;
		   long long  n1=N/3;long long n2=N/7;long long n3=N/21;
		   long long s=0;
		   s+=(3)*(n1)*(n1+1)/2 +(7)*(n2)*(n2+1)/2-(21)*(n3)*(n3+1)/2;
		   return s;
		   
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.sum(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends