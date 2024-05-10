//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
   vector<vector<int>>v;
   void solve(vector<int> &A,int B,int sum,int idx,vector<int>&temp,int n){
       if(sum==B){v.push_back(temp);return;}
       if(sum>B || idx>=n){return;}
       sum+=A[idx];
       temp.push_back(A[idx]);
       solve(A,B,sum,idx,temp,n);
       sum-=A[idx];
       temp.pop_back();
       solve(A,B,sum,idx+1,temp,n);
   }
  
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        sort(A.begin(),A.end());
        A.erase(unique( A.begin(),A.end() ),A.end());
        int n=A.size();
                vector<int>temp;
        solve(A,B,0,0,temp,n);
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
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends