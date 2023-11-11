//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
 bool func(int n){

        while(n!=0){

            int a=n%10;

            if(!(a>0 && a<6)){

                return 0;

            }

              n=n/10;

        }

        return 1;

    } 
    int countNumbers(int n) {
  
        int count=0;
        for(int i=1;i<=n;i++){
           if(func(i)==1){
               count++;
           }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countNumbers(n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends