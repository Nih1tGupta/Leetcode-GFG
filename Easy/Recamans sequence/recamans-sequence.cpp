//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
      vector<int>v;
      unordered_set<int>s;
      v.push_back(0);
      s.insert(0);
      for(int i=1;i<n;i++){
          int a=v[i-1]-i ;
          int b=v[i-1]+i;
          if( a>0 and (s.find(a)==s.end())){
              v.push_back(a);
              s.insert(a);
          }
          else{
              v.push_back(b);
              s.insert(b);
          }
      }
      return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends