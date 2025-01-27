//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void f(int num,string s,vector<string>&v){
        if(s.size()==num){
            v.push_back(s);
            return;
        }
        f(num,s+"0",v);
        if( s.back()!='1'){
            f(num,s+"1",v);
        }
    }
    vector<string> generateBinaryStrings(int num){
        vector<string>v;
        f(num,"",v);
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends