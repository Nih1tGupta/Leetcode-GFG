//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int facDigits(int N){long long fact=1;
        double  count=0;
        if(N==0)
        {
            return 1;
        }
        for(int i=2;i<=N;i++)
        {
            count+=log10(i);
        }
    return int(count+1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.facDigits(n)<<"\n";
       
        
    }
    return 0;
}
// } Driver Code Ends