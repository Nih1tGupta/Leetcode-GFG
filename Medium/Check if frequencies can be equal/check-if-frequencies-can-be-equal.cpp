//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    vector<int>v(26,0);
	    unordered_set<int>st;
	    for(auto &b: s){v[b-'a']++;}
	    for(auto &b: v){if(b!=0){st.insert(b);}}
	    if(st.size()==1){return 1;}
	    for(auto &b: v){
	        if(b==0){continue;}
	        b--;
	        unordered_set<int>st;
	        for(auto &b: v){
	            if(b!=0){
	                st.insert(b);
	            }
	        }
	        if(st.size()==1){return 1;}
	        b++;
	    }
	    return 0;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends