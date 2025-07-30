class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        // int AND=0;int maxi=0;
        // for(auto it:nums){
        //     AND= AND&it;
        //     maxi=max(maxi,AND);
        // }
        // unordered_map<int,int>mp; int len=0;
        // mp[0]=-1;AND=0;
        // for(int i=0;i<n;i++){
        //     AND&=nums[i];
        //     int rem=maxi|AND;
        //     if(mp.find(rem)!=mp.end()){len=max(len,i-mp[rem]+1);}
        //     mp[AND]=i;
        // }
        // return len;   SOMETHING LIKE ABOVE FAILS BCOZ AND DOESNT BEHVE LIKE XORR/SUM WHAT YOU HAVE STUDED FROM STRIVER
        // TIP->The maximum value of bitwise AND of a subarray is simply the maximum number in the array — and it is achieved only when all elements in the subarray are equal to that max.
//         Bitwise AND is not associative like XOR or sum — once 0 comes in, it resets everything.
// AND is monotonically decreasing when accumulating from left to right (AND &= nums[i] will never increase).
 int maxVal = *max_element(nums.begin(), nums.end());
    int len = 0, maxLen = 0;
    
    for (int num : nums) {
        if (num == maxVal) {
            len++;         // extend current streak of max
            maxLen = max(maxLen, len);
        } else {
            len = 0;       // reset streak
        }
    }
    return maxLen;
    }
};