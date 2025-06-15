class Solution {
public:
    int specialTriplets(vector<int>& nums) {
    //     int n=nums.size();int ct=0;
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             for(int k=j+1;k<n;k++){
    //                 if( (nums[i]==nums[k]) and (nums[j]*2==nums[k]) )ct++;
    //             }
    //         }
    //     }
    //     return ct;



    //   const int MOD = 1e9 + 7;
    // int n = nums.size(), ans = 0;

    // for (int j = 1; j < n - 1; ++j) {
    //     int left = 0, right = 0;
    //     long long target = 2LL * nums[j];

    //     // count i where nums[i] == 2 * nums[j]
    //     for (int i = 0; i < j; ++i)
    //         if (nums[i] == target)left++;

    //     // count k where nums[k] == 2 * nums[j]
    //     for (int k = j + 1; k < n; ++k)
    //         if (nums[k] == target)right++;
    //     ans = (ans + 1LL * left * right) % MOD;
    // }
    // return ans;


     const int MOD = 1e9 + 7;
    int n = nums.size();
    unordered_map<int, int> right, left;
    
    // Build frequency map for right
    for (int num : nums) right[num]++;
    
    long long ans = 0;
    
    for (int j = 0; j < n; ++j) {
        // Current value becomes part of "left" now, so reduce from right
        right[nums[j]]--;
        
        long long target = 2LL * nums[j];
        long long count_i = left[target];
        long long count_k = right[target];
        
        ans = (ans + count_i * count_k) % MOD;
        
        // Add nums[j] to left for future iterations
        left[nums[j]]++;
    }
    
    return ans;
    }
};