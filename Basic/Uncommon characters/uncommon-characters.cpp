//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
        
         string str="";
           unordered_map<char,int>mp1;
           unordered_map<char,int>mp2;
           set<char>set1;
           for(int i=0;i<A.length();i++){
               mp1[A[i]]++;
           }
           for(int i=0;i<B.length();i++){
               mp2[B[i]]++;
           }
           for(int i=0;i<A.length();i++){
               if(mp2.find(A[i])==mp2.end())
                    set1.insert(A[i]);
           }
           for(int i=0;i<B.length();i++){
               if(mp1.find(B[i])==mp1.end())
                    set1.insert(B[i]);
           }
           if(set1.empty())
            return "-1";
            for(auto it:set1)
                str=str+it;
            return str;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends