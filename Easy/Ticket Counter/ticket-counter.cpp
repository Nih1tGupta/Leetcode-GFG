//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
      int s=1;int e=N;int ans=1;
      bool move = true;
      while(s<e){
          if(move){
              ans=e;
              s+=K;
              move=false;
          }
          else{
              ans=s;
              e-=K;
              move=true;
          }
          
      }
      return ans;
      
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends