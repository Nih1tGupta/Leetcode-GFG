//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount){
   string str = to_string(amount);
    for(int i=0; i<str.length(); i++){
        if(str[i]=='6') str[i] = '9';
       
    }
    long long result = stoi(str);
    return abs(amount-result);
}