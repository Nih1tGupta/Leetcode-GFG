//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int kthDigit(int A,int B,int K){
        long long j= pow(A,B);
        long long int rem=0;
        for(int i=1;i<=K;i++){
            rem=j%10;
            j=j/10;
        }
        return rem;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B,K;
        cin>>A>>B>>K;
        Solution ob;
        cout << ob.kthDigit(A,B,K) << endl;
    }
    return 0; 
}
// } Driver Code Ends