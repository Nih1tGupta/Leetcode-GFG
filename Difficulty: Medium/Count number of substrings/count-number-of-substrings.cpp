//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  long long int solve(string s,int k){
      if(k<0)return 0;int i=0;int j=0;int c=0;
      int m[26]={0};int res=0;
      while(j<s.length()){
          m[s[j]-'a']++;
          if(m[s[j]-'a']==1)c++;
          while(c>k){
              m[s[i]-'a']--;
              if(m[s[i]-'a']==0){c--;};i++;
          }
          res+=(j-i+1);
          j++;
      }
      return res;
  }
    long long int substrCount (string s, int k) {
    	//code here.
    // 	SLIDING WINDOW
    return solve(s,k)-solve(s,k-1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends