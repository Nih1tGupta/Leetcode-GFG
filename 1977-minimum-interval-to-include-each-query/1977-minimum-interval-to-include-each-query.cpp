class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
    //      vector<int> result;
    // for (int q : queries) {
    //     int minSize = INT_MAX;
    //     for (const auto& interval : intervals) {
    //         int left = interval[0], right = interval[1];
    //         if (left <= q && q <= right) {
    //             int size = right - left + 1;
    //             minSize = min(minSize, size);
    //         }
    //     }
    //     result.push_back(minSize == INT_MAX ? -1 : minSize);
    // }
    // return result;
    sort(intervals.begin(), intervals.end());

    vector<pair<int, int>> sortedQueries;
    for (int i = 0; i < queries.size(); ++i)
        sortedQueries.emplace_back(queries[i], i);
    sort(sortedQueries.begin(), sortedQueries.end());

    vector<int> result(queries.size(), -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap; // {size, end}

    int i = 0; // index for intervals
    for (auto [query, idx] : sortedQueries) {
        // Add all intervals starting before or at query
        while (i < intervals.size() && intervals[i][0] <= query) {
            int size = intervals[i][1] - intervals[i][0] + 1;
            minHeap.emplace(size, intervals[i][1]);
            ++i;
        }

        // Remove intervals that end before the query
        while (!minHeap.empty() && minHeap.top().second < query)
            minHeap.pop();

        if (!minHeap.empty())
            result[idx] = minHeap.top().first;
    }
// Sort intervals	Makes it easy to add valid intervals as queries grow
// Sort queries	So we process from smallest to largest
// Use a min-heap	Always get the smallest-sized interval
// Pop heap if interval ends before query	Ensures we only consider valid intervals
    return result;
    }
};