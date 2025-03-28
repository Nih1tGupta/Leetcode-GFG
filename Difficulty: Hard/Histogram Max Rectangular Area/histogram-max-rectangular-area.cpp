//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    
    int getMaxArea(vector<int> &arr) {
        int n=arr.size();
        vector<int>nse(n,0);
        vector<int>pse(n,0);
        int ans=INT_MIN;
        stack<int>st1;   
        stack<int>st2;
        for(int i=0;i<n;i++){
            while(!st1.empty() and arr[st1.top()]>=arr[i]){st1.pop();}
            if(st1.size()==0){pse[i]=-1;}
            else{pse[i]=st1.top();}
            st1.push(i);
        }
         for(int i=n-1;i>=0;i--){
            while(!st2.empty() and arr[st2.top()]>=arr[i]){st2.pop();}
            if(st2.size()==0){nse[i]=n;}
            else{nse[i]=st2.top();}
            st2.push(i);
        }
        for(int i=0;i<arr.size();i++){
            ans=max(ans,arr[i]*(nse[i]-pse[i]-1));
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getMaxArea(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends