//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int waysToBreakNumber(int N){
    //     int count=0;
    //   for(int i=0;i<=N;i++){
    //       for(int j=0;j<=N;j++){
            //   for(int k=0;k<=N;k++){
            //       if(i+j+k==N){count++;}
            //   }
            
        //   if(N-(i+j)>=0){count++;}
    //       }
           
    //   }
    //   return count;
    
    // O(N)
     long mod=pow(10,9)+7;
        long long  res=(N+1)%mod;
        long long  res1=(N+2)%mod;
        
        long long  ans=(res*res1)%mod/2;
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.waysToBreakNumber(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends