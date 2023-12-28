//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        long long int numberCount(long long int N, long long int K)
        {
             int count  = 0;
           for(int i=N; i>=9; i--){
            int sum = 0;
            int p = i;
            while(p != 0){
                sum  = sum + p%10 ;
                p = p/10;
            }
            
            if(i - sum >= K){
                count++;
            }
          }
          return count;
        }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends