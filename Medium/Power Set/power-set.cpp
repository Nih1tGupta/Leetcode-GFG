//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
void help(vector<string>&ans,string s,string ch,int i){
    // base
    if(i==s.length()){
        if(ch!=""){
        ans.push_back(ch);
        }
        return;
        
        }
        // ont pick
      help(ans,s,ch,i+1);
    //   pick
     help(ans,s,ch+s[i],i+1);
 
}
vector<string> AllPossibleStrings(string s){
   vector<string>ans;
   help(ans,s,"",0);
   sort (ans.begin(),ans.end());
    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends