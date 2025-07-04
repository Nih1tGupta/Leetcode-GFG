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