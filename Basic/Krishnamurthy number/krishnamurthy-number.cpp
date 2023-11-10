//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int fact(int N)
    {
        if(N==0|| N==1){return 1;}
        return N*fact(N-1);
    }
   string isKrishnamurthy(int N) {
       int sum=0;int k=N;
       while(k!=0)
       {
          int r=k%10;
          sum+=fact(r);
          k=k/10;}
       if(sum==N)
       return "YES";
       else
       return "NO";
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
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}
// } Driver Code Ends