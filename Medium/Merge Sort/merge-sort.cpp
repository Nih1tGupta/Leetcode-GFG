//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
      void merge(int arr[], int l, int m, int r)
    {
        long long n=r-l+1;
    long long temp[n];
    int left=l;
    int right=m+1;
    int i=0;
    while(left<=m && right<=r){
        if(arr[left]<=arr[right]){
            temp[i]=arr[left++];
           
            
        }
        else{
            temp[i]=arr[right++];
           
            
        }
        i++;
    }
    while(left<=m){
        temp[i++]=arr[left++];
        
        
    }
    while(right<=r){
        temp[i++]=arr[right++];
        
    }
    for(int i=0;i<n;i++){
        arr[l+i]=temp[i];
    }
}
    public:
     void mergeSort(int arr[], int l, int r)
    {int m = l + (r - l) / 2;
    if(l>=r)return ;
    
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
      
    }
};


//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends