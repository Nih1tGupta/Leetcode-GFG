//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int factorial(int N){long long fact=1;long long i=1;
     for(i=1;i<=N;i++){
           fact=fact*i;
       }
       return fact;
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
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends