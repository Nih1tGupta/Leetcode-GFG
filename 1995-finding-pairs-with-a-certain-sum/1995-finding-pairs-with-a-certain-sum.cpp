class FindSumPairs {
public:
     vector<int> nums1;
    vector<int> nums2;
    unordered_map<int, int> freq2;

    FindSumPairs(vector<int>& n1, vector<int>& n2) {
        nums1 = n1;
        nums2 = n2;
        for (int num : nums2) {
            freq2[num]++;
        }
    }

    void add(int index, int val) {
        // Decrease old value's frequency
        int oldVal = nums2[index];
        freq2[oldVal]--;

        // Update nums2
        nums2[index] += val;

        // Increase new value's frequency
        freq2[nums2[index]]++;
    }

    int count(int tot) {
        int result = 0;
        for (int a : nums1) {
            int target = tot - a;
            if (freq2.count(target)) {
                result += freq2[target];
            }
        }
        return result;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */