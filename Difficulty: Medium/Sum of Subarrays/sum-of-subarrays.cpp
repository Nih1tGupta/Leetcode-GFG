class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        int total=0;
        int n=arr.size();
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
                // int sum=0;
                // for(int k=i;k<=j;k++){sum+=arr[k];}
                // sum+=arr[j];
                // total+=sum;
        //     }
        // }
        // return total;
          //  example 
          
        //  arr = [1,2,3,4]
        //  in subarray 
        //  Element   |        right |  left
        //  1 appear 4 = (4 - 0) + ( 0 * 4)
        //  2 appear 6 = (4 - 1) + ( 1 * 3)
        //  3 appear 4 = (4 - 2) + ( 2 * 2)
        //  4 appear 4 = (4 - 3) + ( 3 * 1)
        int ans = 0;
        // int n  = arr.size();
        for(int i=0;i<n;i++){
            int apper_right = n-i;
            int apper_left = i*apper_right ;
            
            ans += (apper_right*arr[i] + apper_left*arr[i]);
        }
        return ans;
    }
};