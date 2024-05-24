//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod=1e9+7;
    int help(int n,int d,vector<int> &arr,int &sum,int temp,int index, vector<vector<int>> &dp){
        if(sum-temp*2<d)return 0;
        if(index==n){
            int secondSum=sum-temp;
            if(secondSum-temp==d)return 1;
            return 0;
        }
        if(dp[index][temp]!=-1)return dp[index][temp];
        int a = help(n,d,arr,sum,temp,index+1,dp);
        int b = help(n,d,arr,sum,temp+arr[index],index+1,dp);
        return dp[index][temp] = (a+b)%mod;
    }
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        int sum=0;
        for(int i=0;i<n;i++)sum+=arr[i];
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return help(n,d,arr,sum,0,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends