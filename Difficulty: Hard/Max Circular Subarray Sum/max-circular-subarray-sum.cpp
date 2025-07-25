class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
    //      int n = arr.size();
    //     int maxSum = INT_MIN;

    // for (int i = 0; i < n; ++i) {           // Starting index
    //     int sum = 0;
    //     for (int j = 0; j < n; ++j) {       // Length of subarray
    //         sum += arr[(i + j) % n];        // Wrap using modulo
    //         maxSum = max(maxSum, sum);
    //     }
    // }
    // return maxSum;
     int totalSum = 0;
    int maxSum = INT_MIN, curMax = 0;
    int minSum = INT_MAX, curMin = 0;

    for (int num : arr) {
        totalSum += num;

        // Normal max subarray (Kadane)
        curMax = max(num, curMax + num);
        maxSum = max(maxSum, curMax);

        // Min subarray (for circular case)
        curMin = min(num, curMin + num);
        minSum = min(minSum, curMin);
    }

    // If all numbers are negative
    if (maxSum < 0) return maxSum;

    return max(maxSum, totalSum - minSum);
    }
};