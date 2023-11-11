//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
           int index = 0;
       int minDiff = abs(arr[0] - target);
       for(int i=0;i<n;i++){
           if(abs(arr[i] - target) <= minDiff){
               index = i;
               minDiff = abs(arr[i] - target);
           }
           
       }
       
       return arr[index];
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends