class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
    int n = nums.size();
    if (n % k != 0) {return false;}
    unordered_map<int, int> freq_map;
    for (int num : nums) {freq_map[num]++;}
    int max_freq = 0;
    for (auto const& [num, freq] : freq_map) {
        if (freq > max_freq) {max_freq = freq;}
    }
    if ((n / k) < max_freq) {return false;}
    return true;
    }
};