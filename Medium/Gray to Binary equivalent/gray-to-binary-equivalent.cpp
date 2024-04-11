//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
       int ans=0,k=n,t=0;
      for(int i=32;i>=0;i--)
      {
          if(k>=pow(2,i))
          {
              if(n>=pow(2,i))
              {
                  if(t==0)
                  {
                      ans+=pow(2,i);
                      t=1;
                  }else
                  {
                      t=0;
                  }
                 n-=pow(2,i);
              }else
              {
                  if(t==1)
                  {
                      ans+=pow(2,i);
                      t=1;
                  }else
                  {
                      t=0;
                  }
              }
          }
      }
      return ans;
        
    //   for(int i=0;i<n;i++){
           
    //   }
        
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends