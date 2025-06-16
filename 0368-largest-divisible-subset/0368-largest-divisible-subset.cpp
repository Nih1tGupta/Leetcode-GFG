class Solution {
public:

    
//TLE 

// void solve(vector<int>& nums, int idx, vector<int>  &temp){
//         if(idx==nums.size()){
//             if(temp.size()> ans.size())
//                 ans=temp;
//             return;
//         }
//         if(temp.size()==0||nums[idx]%temp.back()==0){
//             temp.push_back(nums[idx]);
//             solve(nums, idx+1, temp);
//             temp.pop_back();
//         }
//         solve(nums, idx+1, temp);
        
//     }
//     vector<int> largestDivisibleSubset(vector<int>& nums){
//         vector<int>  temp;
//         sort(nums.begin(), nums.end());
//         vector<int> dp(nums.size(), -1);
//         solve(nums, 0, temp);
//         return ans;
//     }




     vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> dp(n, 1);vector<int>hash(n);
         int maxi=1; int max_idx=0;
        for(int i = 1; i < n; i++){
            hash[i]=i;
            for(int j = 0;j<i;j++){
                if(nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1; hash[i]=j;   
                }
                if(dp[i]>maxi){
                max_idx=i;
                maxi=dp[i];
                }
            }
        }
        vector<int> temp;
        temp.push_back(nums[max_idx]);
        while(hash[max_idx]!=max_idx){
            max_idx = hash[max_idx];
            temp.push_back(nums[max_idx]);
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};