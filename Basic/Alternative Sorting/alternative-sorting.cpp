//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	  sort(arr,arr+N,greater<int>());
	    vector<int>v;
	    int i=0,j=N-1;
	    while(i<j){
	        v.push_back(arr[i++]);
	        v.push_back(arr[j--]);
	    }
	    if(N%2!=0){
	        v.push_back(arr[N/2]);
	    }
	    return v;
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
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends