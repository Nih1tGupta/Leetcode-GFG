//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int getCandidate(int n, int k);


int main() {

    int t;
    cin >> t;
    while(t--){
    	int n, k;
    	cin >> n >> k;
    	cout << getCandidate(n, k) << endl;
    }
return 0;
}

// } Driver Code Ends


int getCandidate(int n, int k){
      int cnt=0;
   while(n>=k){
       n=n/k;
       cnt++;
   }
   int ans=pow(k,cnt);
   return ans;
}