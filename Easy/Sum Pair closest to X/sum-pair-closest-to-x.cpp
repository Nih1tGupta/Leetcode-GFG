//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
   int i=0;int j=arr.size()-1;
   int close= INT_MAX; vector<int>ans(2,-1);
   while(i<j){int sum=arr[i]+arr[j];
       if(abs(x-sum)<close){ close=abs(x-sum);
           ans[0]=arr[i];ans[1]=arr[j];
       }
       if(sum<x){i++;}
       else{j--;}
   }
   return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends