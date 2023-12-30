//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
       unordered_map<string,int>mp;
       for(int i=0;i<n;i++){mp[arr[i]]++;}
       vector<string>ans;
       int maxi=0;string s="";
       for(int i=0;i<n;i++){
           if(mp[arr[i]]>maxi){
               s=arr[i];maxi=mp[arr[i]];
           }
           else if(mp[arr[i]]==maxi){
               s=min(s,arr[i]);
         
          
           
       }
       }
           string ss= to_string(maxi);
        ans.push_back(s);
           ans.push_back(ss);
           return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends