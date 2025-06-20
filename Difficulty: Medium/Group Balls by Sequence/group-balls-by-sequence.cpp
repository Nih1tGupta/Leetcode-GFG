class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        // code here
         if (arr.size() % k != 0) return false; // Can't divide evenly into groups

    map<int, int> freq;
    for (int num : arr) freq[num]++; // Count how many of each number

    for (auto it : freq) {
        int start = it.first;      // Start of a group
        int count = it.second;     // How many balls with this number

        if (count > 0) {
            // Try to make group: start, start+1, ..., start+k-1
            for (int i = 0; i < k; ++i) {
                if (freq[start + i] < count) {
                    return false; // Not enough balls to make full group
                }
                freq[start + i] -= count; // Use them
            }
        }
    }
    return true;
    }
};