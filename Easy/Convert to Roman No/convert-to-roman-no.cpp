//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
         vector<pair<int,string>>v;
      v.push_back({1,"I"});
      v.push_back({4,"IV"});
      v.push_back({5,"V"});
      v.push_back({6,"VI"});
      v.push_back({9,"IX"});
      v.push_back({10,"X"});
      v.push_back({40,"XL"});
      v.push_back({50,"L"});
      v.push_back({90,"XC"});
      v.push_back({100,"C"});
      v.push_back({400,"CD"});
      v.push_back({500,"D"});
      v.push_back({900,"CM"});
      v.push_back({1000,"M"});
     string ans="";
     int n1=v.size();
     for(int i=n1-1;i>=0;i--){
         while(n>=v[i].first){
             ans+=v[i].second;
             n-=v[i].first;
         }
     }
      
      return ans;
    }
}; 
      

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
// } Driver Code Ends