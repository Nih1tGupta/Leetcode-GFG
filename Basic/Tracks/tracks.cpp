//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string answer(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        
        cout<< answer(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends

string answer(int a[], int n)
{

   int mid=n/2;
   int diff=abs(a[1]-a[0]);
   if(a[mid]!=1||n%2==0||a[n-1]!=a[0]||diff==0){
       return "No";
   }
   else{
       for(int i=1;i<n;i++){
           if(abs(a[i]-a[i-1])!=diff)
               return "No";
       }
   }
   return "Yes";
}