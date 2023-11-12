//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void gfSeries(int N)
    {
        long long int a = 0, b = 1, c;
        cout << a << " " << b << " ";
        for(int i=2; i<N; i++) {
            c = a*a - b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends