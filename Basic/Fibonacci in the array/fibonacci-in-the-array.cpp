//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	

	public:
	int checkFib(long long arr[], int N)
	{
	    int count=0;
	   for(int i=0;i<N;i++){
	       long long num1=arr[i]*arr[i]*5-4; long long sqrt1=sqrt(num1);
	    long long num2=arr[i]*arr[i]*5+4;   long long sqrt2=sqrt(num2);
	    if(sqrt1*sqrt1==num1 || sqrt2*sqrt2==num2){count++;}
	       	      
	   }
	   return count;
	}

};
	

//{ Driver Code Starts.



int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		long long a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        

        Solution ob;
        cout << ob.checkFib(a, n);
	    cout << "\n";
	     
    }
    return 0;
}

	
// } Driver Code Ends