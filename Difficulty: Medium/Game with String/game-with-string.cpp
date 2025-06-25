class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        unordered_map<char, int> mp;
    for (char ch : s) mp[ch]++;

    // Max heap for frequencies
    priority_queue<int> pq;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
    char ch = it->first;
    int freq = it->second;
    pq.push(freq);
}

    while (k-- && !pq.empty()) {
        int top = pq.top(); pq.pop();
        if (top > 1) pq.push(top - 1);
    }

    int result = 0;
    while (!pq.empty()) {
        int freq = pq.top(); pq.pop();
        result += freq * freq;
    }

    return result;
    }
    
};