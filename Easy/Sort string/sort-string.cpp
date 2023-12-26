//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{	public:

char isVowel(char s){
    if(s=='a'|| s=='e'||s=='i'|| s=='o'||s=='u'){return true;}
    return false;
    }
	string SortedString(string s)
	{
	  string vowel;string cons;
	  for(int i=0;i<s.length();i++){
	      if(isVowel(s[i])){vowel+=s[i];}
	      else{cons+=s[i];}
	  }
	     sort(cons.begin(),cons.end());
	     sort(vowel.begin(),vowel.end());
	     string ans;int v=0;int c=0;
	     while(v<vowel.length() and c<cons.length()){
	         if(isVowel(s[0])){ans+=vowel[v];ans+=cons[c];}
	     
	     else{ans+=cons[c];ans+=vowel[v];}
	     v++;c++;
	  }
	   while(c<cons.length()){
	       ans+=cons[c];c++;
	   }
	   return ans;
	}

};


//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string s;
	    cin >> s;
	    Solution ob;
	    string ans=ob.SortedString(s);
	    cout<<ans<<"\n";
    }
	return 0;
}
// } Driver Code Ends