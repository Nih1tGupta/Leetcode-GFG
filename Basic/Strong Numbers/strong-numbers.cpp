//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
     int facto(int n){
        int ans = 1;
        for(int i=n;i>0;i--){
            ans*=i;
        }
        return ans;
    }
    int isStrong(int N) {
        int num = N, sum = 0;
        while(N!=0){
            int rem = N%10;
            sum+= facto(rem);
            N = N/10;
        }
        
        if(sum == num)
        return 1;
        
    return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}
// } Driver Code Ends