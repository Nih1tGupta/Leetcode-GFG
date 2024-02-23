//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            int n=price.size();
          vector<int>profit(n,0);
          
        //  1 st traversal
          int maxi=price[n-1];
          for(int i=n-2;i>=0;i--){
              maxi= max(price[i],maxi);
              profit[i]= max(profit[i+1],maxi-price[i]);
          }
        //   2 nd traversal 
          int mini = price[0];
          for(int i=1;i<n;i++){
              mini= min(mini,price[i-1]);
              profit[i]=max(price[i]-mini+ profit[i],profit[i-1]);
          }
          return profit[n-1];
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends