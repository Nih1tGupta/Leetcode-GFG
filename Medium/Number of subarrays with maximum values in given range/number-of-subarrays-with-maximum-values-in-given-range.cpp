//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
    long long start=0,end=0,result=0,temp=0;
       for(long long end=0;end<n;end++) {
           if(a[end]>=L && a[end]<=R) {
               temp = end-start+1;
           }
           if(a[end]>R) {
               temp=0;
               start = end+1;
           }
           result = result + temp;
       }
        return result;
        
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends