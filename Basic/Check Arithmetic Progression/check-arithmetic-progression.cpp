//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        sort(arr,arr+n);
        long long dif = arr[1] - arr[0];
        for(long long i=1;i<n-1;i++){
            if(arr[i+1]-arr[i]!=dif){
                return 0;
            }
        }
        return 1;
        
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
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
         (ob.checkIsAP(arr, n))? (cout << "YES" << endl) :
                       (cout << "NO" << endl);   
    }
 
  return 0;
}

// } Driver Code Ends