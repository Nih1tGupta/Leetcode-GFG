class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        // sort(arr.begin(),arr.end());int n=arr.size();
        // int a=arr[0]+k; int b= max(arr[n-1],arr[n-1]-k);
        // return abs(b-a);
        // vector<int>ans(n,-1);
         int n=arr.size();
       sort(arr.begin(),arr.end());
        int ans=arr[n-1]-arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<k) continue;
            int maxi=max(arr[i-1]+k,arr[n-1]-k);
            int mini=min(arr[0]+k,arr[i]-k);
            ans=min(ans,abs(maxi-mini));
        }
        return ans;
    }
};