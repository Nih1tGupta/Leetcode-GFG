//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	 int primes(int n)
    {
        int cnt=0;
        for(int i=2;i*i<=n;i++)
        {
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
        }
        
        if(n!=1)
        cnt++;
        
        return cnt;
    }
    int sumOfPowers(int a, int b){
        // Code here
        int ans=0;
        for(int i=a;i<=b;i++)
        {
            ans+=primes(i);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends