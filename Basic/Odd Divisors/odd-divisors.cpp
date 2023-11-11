//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int oddNumberOfDivisor(int N){
      return floor(sqrt(N)); 
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
        cin >> N;
        Solution ob;
        cout << ob.oddNumberOfDivisor(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends