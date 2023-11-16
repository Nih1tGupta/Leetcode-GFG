//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> square(int arr[], int n);


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int> ans;
        ans = square(arr, n);
        for(int i:ans)
            cout << i << " ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends


vector<int> square(int arr[], int n){
    vector<int> ans;
    map<int , int> m;
    for(int i=0; i<n; i++) m[arr[i]]++;
    int ans1=-1 , ans2=-1;
    for(auto i : m){
        if(i.second>=4){
            if(ans1<i.first*i.first) { ans1=i.first*i.first; ans2=i.second/4; }
        }
    }
    ans.push_back(ans1);
    if(ans2!=-1)
    ans.push_back(ans2);
    return ans;
}
