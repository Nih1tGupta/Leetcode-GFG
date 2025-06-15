class Solution {
  public:
  
    bool solve(int mid,int k,vector<int>&arr){
        int s=0;
        for(auto it:arr){
            s+=ceil((double)it/mid);
        }
        return s<=k;
    }
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int maxi=*max_element(arr.begin(),arr.end());
        // for(int i=1;i<=maxi;i++){
        //     if(solve(i,k,arr))return i;
        // }
        // return -1;
        int start = 1;
        int end = 0;
        for(int i:arr) end = max(end,i);
        int ans = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(solve(mid,k,arr)){
                ans = mid;
                end = mid-1;
            }
            else
            start = mid+1;
        }
        return ans;
    }
};
