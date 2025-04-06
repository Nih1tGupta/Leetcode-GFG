class Solution {
public:
     vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> dp(n, 1);
        for(int i = 0; i < n; i++)
        {
            for(int j = i - 1; j >= 0; j--)
            {
                if(nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        int maxi = *max_element(dp.begin(), dp.end());
        int max_idx = 0;
        for(int i = 0; i < n; i++)
        {
            if(dp[i] == maxi)
            {
                max_idx = i;   
                break;
            }
        }
        vector<int> res;
        int i = max_idx;
        res.push_back(nums[i]);
        int prev = nums[i];
        maxi--;
        i--;
        while(i >= 0 && maxi)
        {
            if(dp[i] == maxi && prev % nums[i] == 0)
            {
               res.push_back(nums[i]); 
                prev = nums[i];  
                maxi--;
            }  
            i--;
        }
        return res;
    }
};