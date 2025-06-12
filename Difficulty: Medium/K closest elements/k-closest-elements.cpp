class Solution {
  public:
      struct CMP {
        bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first)
                return a.second < b.second;   // Prefer larger value for equal diff
            return a.first > b.first;                  // Min heap based on diff
        }
    };

    vector<int> printKClosest(vector<int> arr, int k, int x) {
        
        priority_queue< pair<int, int>, vector<pair<int, int>>, CMP> pq;
        for (int val : arr) {
            if (val == x) continue;
            int diff = abs(val - x);
            pq.push({diff, val});
        }

        vector<int> result;
        for (int i = 0; i < k && !pq.empty(); ++i) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        // Sort the result based on closeness again for output ordering
        // sort(result.begin(), result.end(), [&](int a, int b) {
        //     int diffA = abs(a - x), diffB = abs(b - x);
        //     if (diffA != diffB)
        //         return diffA < diffB;
        //     return a > b; // prefer larger element if tie
        // });

        return result;
    }
};