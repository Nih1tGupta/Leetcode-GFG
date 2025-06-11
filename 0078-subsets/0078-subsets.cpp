class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> result = {{}};

    for (int i = 0; i < nums.size(); i++) {
        int n = result.size(); // current size of result

        // For each existing subset, add nums[i] to it
        for (int j = 0; j < n; j++) {
            vector<int> subset = result[j];  // copy existing subset
            subset.push_back(nums[i]);       // add new element
            result.push_back(subset);        // add new subset to result
        }
    }

    return result;
    }
};