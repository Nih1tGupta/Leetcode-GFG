//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
     vector<long>x1,x2;
        int i=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                x1.push_back(arr[i]);
            }
            else
            {
                x2.push_back(arr[i]);
            }
        }
        sort(x1.begin(),x1.end());
        sort(x2.begin(),x2.end(),greater<long>());
        for(int i=0;i<x2.size();i++)
        {
           arr[i]=x2[i];
        }
         for(int i=x2.size();i<n;i++)
        {
           arr[i]=x1[j++];
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends