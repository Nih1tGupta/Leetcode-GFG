//{ Driver Code Starts
// An efficient C++ program to compute 
// sum of bitwise OR of all pairs
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    long long N = n, ans = 0;
    	vector<long long>C(31,0);
    	for(int i = 0; i < N; i++){
    	    for(int j = 0; j < 31; j++){
    	        int XOR= 1 << j;
    	        if(arr[i] & XOR){
    	            C[j]++;}}}
    	 
    	for(int i = 0; i < 31; i++){
    	    ans += C[i] * (N - C[i]) * (1LL << i);
    	}
    	return ans;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n ;
	 cin>>n;
	 int arr[n+1];
	 for( int i=0;i<n;i++)
	    cin>>arr[i];
	 Solution ob;
	 cout<<ob.sumXOR(arr, n)<<endl;
	}	
	return 0;
}

// } Driver Code Ends