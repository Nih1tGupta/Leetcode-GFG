//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
  double findArea(int A,int B,int C){
        if(A+B <= C or B+C <= A or C+A <= B)
            return 0.0;
        double s = (A+B+C) / 2.0;
        return sqrt(s * (s-A) * (s-B) * (s-C));
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<fixed<<setprecision(3);
        cout<<ob.findArea(A,B,C)<<"\n";
    }
}
// } Driver Code Ends