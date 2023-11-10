//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
       int n=S.size(); string ans;
        for(int i=0;i<=n;i++){
            ans.push_back(i+1+'0');
        }
        int k=1;
        while(k){
            int t=0;
            for(int i=0;i<n;i++){
                if(S[i]=='I' && ans[i] > ans[i+1]){
                    swap(ans[i],ans[i+1]);
                    t=1;
                }
                else if(S[i]=='D' && ans[i] < ans[i+1]){
                    swap(ans[i],ans[i+1]);
                    t=1;    
                }
            }
            if(t==0)
                k=0;}
        return(ans);
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends