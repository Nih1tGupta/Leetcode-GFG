class Solution {
  public:
  long long getCost(vector<int>& h, vector<int>& cost, int target) {
    long long total = 0;
    for (int i = 0; i < h.size(); i++) {
        total += 1LL * abs(h[i] - target) * cost[i];
    }
    return total;
}
    int minCost(vector<int>& h, vector<int>& cost) {
        // code h
//   int n = h.size();
//     int mini = INT_MAX;

//     for (int i = 0; i < n; i++) {
//         int to_make = h[i];
//         int costs = 0; // Reset for this candidate target

//         for (int j = 0; j < n; j++) {
//             int diff = abs(h[j] - to_make);
//             costs += diff * cost[j];
//         }

//         mini = min(mini, costs);
//     }

//     return mini;
  int low = *min_element(h.begin(), h.end());
    int high = *max_element(h.begin(), h.end());
    long long ans = LLONG_MAX;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long cost1 = getCost(h, cost, mid);
        long long cost2 = getCost(h, cost, mid + 1);

        ans = min(cost1, cost2);

        if (cost1 < cost2) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return (int)ans;
    }
};
