//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        if(n==1)return {1};
        if(n==2)return {1,1};
        vector<int>prev={1,1};
        for(int i=3;i<=n;i++){
            vector<int>curr(i);
            curr[0]=1;
            for(int k=1;k<i-1;k++){curr[k]=prev[k-1]+prev[k];}
            curr[i-1]=1;
            prev=curr;
        }
        return prev;
    }
};



//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends