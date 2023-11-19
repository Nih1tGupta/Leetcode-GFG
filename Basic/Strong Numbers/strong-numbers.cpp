//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
	int facto(int n){
	  long long fact=1;
	    for(long long  i=1;i<=n;i++){fact*=i;}
	    return fact;
	}
		int is_StrongNumber(int n)
		{
		      int num = n; int sum = 0;
        while(n>0){
        int digit =n%10;
        sum+=facto(digit);
        n/=10;
    }
    return (sum == num) ? 1:0;
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
    	int ans = ob.is_StrongNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends