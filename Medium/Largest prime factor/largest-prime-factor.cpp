//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){return false;}
        else{return true;}
    }
}
    long long int largestPrimeFactor(int N){
  long i=2;
        long val=N;
        while(i*i<=val){
            if(val%i==0) val=val/i;
            else i++; 
        }
        return val;
}
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends