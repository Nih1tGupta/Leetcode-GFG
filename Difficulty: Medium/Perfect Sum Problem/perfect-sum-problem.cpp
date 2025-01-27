//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int sum(vector<int>&arr, vector<vector<int>>&dp,int target,int index){
        if(index == 0){
            if(target==0 && arr[0]==0)
                return 2;
            if(target==0 || target == arr[0])
                return 1;
            return 0;
        }
        
        if(dp[index][target]!=-1) return dp[index][target];
        
        int include=0;
        if(arr[index]<=target){
           include=sum(arr,dp, target-arr[index],index-1);
        }
       
        int exclude=sum(arr, dp,target,index-1);
        
        return dp[index][target]= include+exclude;
    }
    
    int perfectSum(vector<int>& arr, int target) {
        int index=arr.size();
        vector<vector<int>>dp(index,vector<int>(target+1,-1));
        int ans=sum(arr,dp,target,index-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        cout << solution.perfectSum(arr, target);
        cout << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends