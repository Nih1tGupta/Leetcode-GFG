//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {int maxi=INT_MIN;vector<char>v;
       unordered_map<char,int>mp;
       for(int i=0;i<str.length();i++){mp[str[i]]++;}
       for(auto i : mp){ maxi=max(maxi,i.second);}
      for(auto i : mp){
        if(maxi==i.second)
            v.push_back(i.first); }
     sort(v.begin(),v.end());
     return v[0];
    }
};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends