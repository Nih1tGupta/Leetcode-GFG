class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            // Ensure mid is even, if it's odd, decrement it to make it even
            if (mid % 2 == 1) {
                mid--;
            }

            // Check the pair
            if (nums[mid] == nums[mid + 1]) {
                // Single element must be in the second half
                l = mid + 2;
            } else {
                // Single element must be in the first half
                r = mid;
            }
        }

        // l will be the index of the single element
        return nums[l];
    }
};