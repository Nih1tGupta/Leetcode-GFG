//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    long int minOperations(int arr[], int N)
     {
       long int sum=0;
       for(int i=0;i<N;i++){
           sum += arr[i];
       }
       if(sum%N!=0)
           return -1;
       int avg = sum/N;
       int diffSum = 0;
       for(int i=0;i<N;i++){
           diffSum += abs(avg-arr[i]);
       }
       return diffSum/2;
   }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n,i;
	 cin>>n; int a[n];
	 for(i=0;i<n;i++)
	 cin>>a[i];
	 Solution obj;
	  long int ans=obj.minOperations(a,n);
	  cout<<ans<<endl;
	}
	return 0;
}


// } Driver Code Ends