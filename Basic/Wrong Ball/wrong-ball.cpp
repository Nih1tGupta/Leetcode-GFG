//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int countWrongPlacedBalls(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<countWrongPlacedBalls(a)<<endl;
        
    }
}

// } Driver Code Ends


int countWrongPlacedBalls(string s)
{
    int count=0;
    for(int i=0;i<s.length();i++){
        if(i%2==1){
            if(s[i]=='R'){count++;}}
            else{if(s[i]=='B'){count++;}}
        
    }
    return count;
}
