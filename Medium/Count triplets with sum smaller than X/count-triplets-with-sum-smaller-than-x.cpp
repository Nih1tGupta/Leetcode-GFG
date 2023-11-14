//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	      sort(arr,arr+n);int count=0;
      for(int i=0;i<n-2;i++){
          long long  sum1=0;int l=i+1;int r=n-1;
          while(l<r){
              sum1=arr[i]+arr[l]+arr[r];
              if(sum1<sum){count+=r-l;l++;}
             else{r--;}
          }
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
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends