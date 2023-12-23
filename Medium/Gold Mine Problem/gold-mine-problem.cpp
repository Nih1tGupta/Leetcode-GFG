//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
      int ans=0;
      for(int j=m-2;j>=0;j--){
          for(int i=0;i<n;i++){
              if(i==0){
                  if(i+1<n){M[i][j]+=max(M[i][j+1],M[i+1][j+1]);}
                  else {M[i][j]+=M[i][j+1];}
              }
              
              else if(i==n-1){
                  if(i-1>=0){M[i][j]+=max(M[i-1][j+1],M[i][j+1]);}
                  else{M[i][j]+=M[i][j+1];}
              }
              
              else{
                  int temp=M[i][j+1];
                  if(i-1>=0){temp=max(temp,M[i-1][j+1]);}
                  if(i+1<n){temp=max(temp,M[i+1][j+1]);}
                  M[i][j]+=temp;
              }
              
              if(j==0){
                  ans=max(M[i][j],ans);
              }
              
          }
      }
      return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends