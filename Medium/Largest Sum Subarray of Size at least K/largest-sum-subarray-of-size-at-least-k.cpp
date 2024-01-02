//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long  ans=0; long long maxi = INT_MIN;
        long long sum=0;int end=0;long long  j=0;
        for(long long  i=0;i<n;i++){
            sum+=a[i];
            if(i-j+1 == k){maxi = max(maxi,sum);}
            else if(i-j+1>k){
                end+=a[j];j+=1;
                if(end<0){sum-=end;end=0;}
                maxi=max(maxi,sum);
            }
        }
        return maxi;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends