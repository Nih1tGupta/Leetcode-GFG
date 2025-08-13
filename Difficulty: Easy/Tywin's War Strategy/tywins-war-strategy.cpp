class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
          int n=arr.size();int c=0;
        for(int i=0;i<n;i++){
            if(arr[i]%k!=0) arr[i]=k-(arr[i]%k);
            else arr[i]=0;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<(n+1)/2;i++){
            c+=arr[i];
        }
        return c;
    }
};