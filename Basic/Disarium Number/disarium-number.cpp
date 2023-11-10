//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isDisarium(int N) {
          int c=0,rev=0,num=N;
        while(num>0){
            int rem=num%10;
              rev=rev*10+rem;
              num/=10;
        }
        int i=1;
        while(rev>0){
            c=c+pow(rev%10,i);
            i++;
            rev/=10;
        }
        if(c==N){
            return 1;
        }
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
        cout << ob.isDisarium(N) << endl;
    }
    return 0;
}
// } Driver Code Ends