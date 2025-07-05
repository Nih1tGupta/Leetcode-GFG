class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int n=arr.size();
    //     int maximum=0;int freq_s = 0;
    //     for (int i = 0; i < n; i++) {
    //     int s = INT_MAX, ss = INT_MAX;
    //     int freq_s = 0;  // Count of the smallest element in the current subarray

    //     for (int j = i; j < n; j++) {
    //         int val = arr[j];

    //         if (val < s) {
    //             ss = s;
    //             s = val;
    //             freq_s = 1;
    //         } else if (val == s) {
    //             freq_s++;
    //         } else if (val < ss) {
    //             ss = val;
    //         }

    //         // Valid subarray if we have at least two occurrences of smallest
    //         // or smallest and second smallest are both set
    //         if ((freq_s >= 2) || (ss != INT_MAX)) {
    //             int curr_score = s + ((freq_s >= 2) ? s : ss);
    //             maximum = max(maximum, curr_score);
    //         }
    //     }
    // }

    // return maximum;
    int maxi=0;
    for(int i=0;i<n-1;i++){maxi=max(maxi,arr[i]+arr[i+1]);}
    return maxi;
    }
};