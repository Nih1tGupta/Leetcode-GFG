//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){

int size= q.size();
       int mid=q.size()/2;
        queue<int>newq;
          for(int i=0; i<mid; i++) {
            int val = q.front();
            q.pop();
            newq.push(val);
        }
        while(! newq.empty()){
            int top=newq.front();
            newq.pop();
            q.push(top);
            int top1=q.front();
            q.pop();
            q.push(top1);
        }
        vector<int>ans;
        while(!q.empty()){int top2 = q.front();
            q.pop();
            ans.push_back(top2);}
        return ans;
      
        

    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends