//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   
     bool possible(int arr[],int N,int K,int mid){
        int partitions = 1;
        int sum = 0;int maxi = 0;
        for(int i=0;i<N;i++){
            if(arr[i]>mid)return false;
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }
            else{
                sum = arr[i];
                partitions+=1;
                maxi = max(sum,maxi);
            }
        }
        return partitions<=K;
    }
    int splitArray(int arr[] ,int N, int K) {
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        int low = 0,high = sum;
        int ans = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(possible(arr,N,K,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends