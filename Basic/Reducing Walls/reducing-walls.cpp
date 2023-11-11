//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int ReducingWalls(int arr[], int n, int k);


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout << ReducingWalls(arr, n, k) << endl;
        
    }
    return 0;
}

// } Driver Code Ends


int ReducingWalls(int arr[], int n, int k)
{
   int count=0;
   for(int i=0; i<n; i++){
       if(arr[i]>k){
           count  = count + (arr[i]-1)/k;
       }
   }
   return count;
}
