//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int divisibleBy5(string N){
       int n = N.size();
        if(N[n-1] == '5' || N[n-1] == '0') return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin >> N;
        Solution ob;
        cout << ob.divisibleBy5(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends