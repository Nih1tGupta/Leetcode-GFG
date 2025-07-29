class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        map<int,int>mp;
        mp[0]++;
        int c=0; int xr=0;
        for(int i=0;i<arr.size();i++){
            xr+=arr[i];
            int rem=xr-k;
            c+=mp[rem];
            mp[xr]++;
        }
        return c;
    }
};