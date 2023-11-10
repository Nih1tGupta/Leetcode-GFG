//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int checkPower(int N){
         for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(N == pow(i,j)){return true;}
            }
        }
        return false;
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
        cout << ob.checkPower(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends