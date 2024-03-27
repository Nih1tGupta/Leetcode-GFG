//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        long long lucas(int n)
        {
          long long int a = 2, b = 1, c;
    if(n == 0)
        return 2;
    else if(n==1)
        return 1;
    for(int i=2; i<=n; i++) {
        c = (a + b) % 1000000007;
        a = b % 1000000007;
        b = c % 1000000007;
    }
    return c;
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
		Solution ob;
		cout<<ob.lucas(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends