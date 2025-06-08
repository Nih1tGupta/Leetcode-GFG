class Solution {
public:
    // int longestNiceSubarray(vector<int>& nums) {
        // int maxi=1;int k=0;
        // int r=0;int l=0;
        // while(r<nums.size()){
        //     // shrink
        //     while(nums[r]&k){
        //         k^=nums[l];
        //         l++;
        //     }
        //     k|=nums[r];
        //     maxi=max(maxi,r-l+1);
        //     r++;
        // }
        // return maxi;
           bool isNice(vector<int>& nums, int start, int end) {
        for (int i = start; i <= end; i++) {
            for (int j = i + 1; j <= end; j++) {
                if ((nums[i] & nums[j]) != 0) { 
                    return false;
                }
            }
        }
        return true;
    }

    int longestNiceSubarray(vector<int>& nums) {
        int maxLen = 1;
        int size = nums.size();

        for (int start = 0; start < size; start++) {
            for (int end = start; end < size; end++) {
                if (isNice(nums, start, end)) {
                    maxLen = max(maxLen, end - start + 1);
                } else {
                    break; 
                }
            }
        }

        return maxLen;
    }
};