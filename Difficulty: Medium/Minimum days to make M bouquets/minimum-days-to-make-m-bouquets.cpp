class Solution {
  public:
    bool check(vector<int>&arr, int k,int m,int days){
        int flowers=0, bouq=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>days) {
                bouq+=flowers/k;
                flowers=0;
            } else {
                flowers++;
            }
        }
        if(flowers) bouq+=flowers/k;
        return bouq>=m;
    }
    int minDaysBloom(vector<int>& arr, int k, int m) {
        if(m*k>arr.size()) return -1;
        int lo=1, hi=1e9;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(arr,k,m,mid)) hi=mid-1;
            else lo=mid+1;
        }
        return lo;
    }
};