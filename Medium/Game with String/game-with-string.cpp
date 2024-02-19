//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
       unordered_map<int,int>mp;
       vector<int>v; long long sum=0;
       for(int i=0;i<s.length();i++){mp[s[i]]++;}
       for(auto it = mp.begin(); it!=mp.end(); it++){v.push_back((*it).second);}
       sort(v.begin(),v.end());
        while(k!=0){
            v[v.size()-1]=v[v.size()-1]-1;
            k--;
            sort(v.begin(),v.end());
        }
       
       for(int i=0;i<v.size();i++){sum+=(v[i]*v[i]);}
       return sum;
       
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends