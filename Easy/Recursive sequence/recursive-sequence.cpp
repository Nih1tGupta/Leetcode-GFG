//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        int mod = 1e9 + 7;
        long long res = 0;
        long long j = 1;
        
        for(int i=1; i<=n; i++) {
            long long val = 1;
            long long  k = i;
            while(k--) {
                val = (val * j) % mod;
                j++;
            }
            res = ((res%mod) + (val%mod)) % mod;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends