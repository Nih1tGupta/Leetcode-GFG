//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  int t[501][501];
   int solve(string str,int i,int j){
       while(str[i]==str[j] and i<j){i++;j--;}
       if(i>=j){return 0;}
       if(t[i][j]!=-1)return t[i][j];
      
       return t[i][j]= min(1+solve(str,i+1,j), 1+solve(str,i,j-1));
   }
  int countMin(string str){
    //complete the function here
    memset(t,-1,sizeof(t));
    return solve(str,0,str.length()-1);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends