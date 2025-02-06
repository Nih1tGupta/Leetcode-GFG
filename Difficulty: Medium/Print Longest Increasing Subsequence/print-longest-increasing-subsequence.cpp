//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& arr) {
        // int n=arr.size();
        int maxi=0;int index=-1;
    vector<int>dp(n,1);
    vector<int>hash(n,-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                if(dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1; hash[i]=j;
                }
            }
        }
    }
        for(int i = 0 ;i<n;i++){
            if(dp[i]>maxi){
                maxi = dp[i];
                index = i;
            }
        }
    vector<int>s;
    while(index!=-1){
        s.push_back(arr[index]);
        index=hash[index];
    }
    reverse(s.begin(),s.end());
    return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> res = obj.longestIncreasingSubsequence(N, arr);
        for (auto x : res)
            cout << x << " ";
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends