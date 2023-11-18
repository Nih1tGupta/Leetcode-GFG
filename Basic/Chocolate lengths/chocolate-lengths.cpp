//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int chocolateLength(int N , int A[]) {
        int result=A[0];
        for(int i=1;i<N;i++){
           result= __gcd(A[i],result);
           if(result==1)
            return 1;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.chocolateLength(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends