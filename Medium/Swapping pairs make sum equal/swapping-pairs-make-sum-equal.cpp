//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
      sort(a,a+n);sort(b,b+m);int A=0;int B=0;
      for(int i=0;i<n;i++){A+=a[i];}
         for(int i=0;i<m;i++){B+=b[i];}
         int diff=(A-B);
         if( diff%2!=0){return -1;}
         int difff=(A-B)/2;
        int i=0;int j=0;
        while(i<n and j<m){
            int t=a[i]-b[j];
            if(t==difff){return 1;}
            else if(t>difff){j++;}
            else{i++;}
        }
         return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends