//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int getCount(int arr[], int n, int num1, int num2)
    {   int p1=0,p2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==num1){
                p1=i;
                break;}}
        for(int i=n-1;i>=0;i--){
            if(arr[i]==num2){
                p2=i;
                break;}}
        if(p1==p2){
            return 0;
        }
        return p2-p1-1;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int num1,num2;
	    cin>>num1>>num2;
	    Solution ob;
	    cout << ob.getCount(a, n, num1, num2) <<"\n";
	}
	return 0;
}

// } Driver Code Ends