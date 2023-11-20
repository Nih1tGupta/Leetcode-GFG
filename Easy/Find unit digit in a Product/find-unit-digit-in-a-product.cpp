//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int theLastDigit(int a, int b, int c, int d, int e, int f){
        a = a %10; b = b%4 + 4;
        c = c %10; d = d%4 + 4;
        e = e %10; f = f%4 + 4;
        int g = (((int)(pow(a, b))) % 10); 
        int h = (((int)(pow(c, d))) % 10);
        int i = (((int)(pow(e, f))) % 10);
        
        int pro = (g*h*i)%10;
        
        return pro;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f;
        cin >> a>>b>>c>>d>>e>>f;
        Solution ob;
        cout << ob.theLastDigit(a,b,c,d,e,f) << endl;
    }
    return 0; 
} 
// } Driver Code Ends