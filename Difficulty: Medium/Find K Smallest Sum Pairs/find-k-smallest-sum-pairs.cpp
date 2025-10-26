class Solution {
  public:
    vector<vector<int>> kSmallestPair(vector<int> &arr1, vector<int> &arr2, int k) {
        // code here
        vector<vector<int>> result;
    if (arr1.empty() || arr2.empty() || k == 0) return result;

    auto cmp = [](const tuple<int,int,int>& a, const tuple<int,int,int>& b){
        return get<0>(a) > get<0>(b); // min-heap by sum
    };
    priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, decltype(cmp)> pq(cmp);

    int n1 = arr1.size(), n2 = arr2.size();
    for (int i = 0; i < min(n1, k); i++)
        pq.push({arr1[i] + arr2[0], i, 0});

    while (!pq.empty() && result.size() < k) {
        auto [sum, i, j] = pq.top(); pq.pop();
        result.push_back({arr1[i], arr2[j]});

        if (j + 1 < n2)
            pq.push({arr1[i] + arr2[j+1], i, j+1});
    }

    return result;
    }
};
