//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isFactorial(int N){
        int constant=1;int multiplier=1;
        while(constant<N){
            constant*=multiplier; multiplier++;
        }
        if(constant==N){return 1;}
        else{return 0;}
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
        cout << ob.isFactorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends