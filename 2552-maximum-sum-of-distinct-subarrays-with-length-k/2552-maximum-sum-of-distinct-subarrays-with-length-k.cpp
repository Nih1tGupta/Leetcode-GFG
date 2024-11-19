class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        // unordered_set<long long >st;long long  n=nums.size();
        // long long maxi=0;long long i=0;long long  j=0;long long sum=0;
        // while(j<n){
        //     if(st.find(nums[j])!=st.end()){sum-=nums[i];st.erase(nums[i]);i++;j=i;}
        //     st.insert(nums[j]);sum+=nums[j];
        //     if(st.size()==k){maxi=max(maxi,sum);sum=0;st.clear();i++;j=i;}
        //     j++;
        // }
        // return maxi;
          long long ans = 0;
        long long currentSum = 0;
        int begin = 0;
        int end = 0;

        unordered_map<int, int> numToIndex;

        while (end < nums.size()) {
            int currNum = nums[end];
            int lastOccurrence =
                (numToIndex.count(currNum) ? numToIndex[currNum] : -1);

            // if current window already has number or if window is too big,
            // adjust window
            while (begin <= lastOccurrence || end - begin + 1 > k) {
                currentSum -= nums[begin];
                begin++;
            }
            numToIndex[currNum] = end;
            currentSum += nums[end];
            if (end - begin + 1 == k) {
                ans = max(ans, currentSum);
            }
            end++;
        }
        return ans;
    }
};