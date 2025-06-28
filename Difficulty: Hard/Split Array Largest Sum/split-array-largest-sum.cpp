class Solution {
  public:
    bool solve(vector<int>&arr,int N,int K,int mid){
        int partitions = 1;
        int sum = 0;int maxi = 0;
        for(int i=0;i<N;i++){
            if(arr[i]>mid)return false;
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }
            else{
                sum = arr[i];
                partitions+=1;
                maxi = max(sum,maxi);
            }
        }
        return partitions<=K;
    }
    int splitArray(vector<int>& arr, int k) {
        // code here
        int sum=0;int N=arr.size();
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        int low = 0,high = sum;
        int ans = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(solve(arr,N,k,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};