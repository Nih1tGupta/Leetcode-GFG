//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        long long ans=0;
        priority_queue <long long,vector <long long>,greater <long long>> pq; //Min Heap
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        while(!pq.empty() and pq.size()>=2){
            long long p=pq.top();
            pq.pop();
            long long q=pq.top();
            pq.pop();
            ans+=p+q;
            pq.push(p+q);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends