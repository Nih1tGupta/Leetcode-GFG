//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
      int distance(int X, int Y)
      {
          int leftNode = X;
          int rightNode = Y;
          int dist = 0;
          while(leftNode != rightNode){
              if(leftNode>rightNode) leftNode /=2;
              else rightNode /=2;
              dist++;
          }return dist;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long X,Y;
        cin>>X>>Y;
        Solution ob;
        cout << ob.distance(X,Y) << endl;
    }
    return 0; 
}
// } Driver Code Ends