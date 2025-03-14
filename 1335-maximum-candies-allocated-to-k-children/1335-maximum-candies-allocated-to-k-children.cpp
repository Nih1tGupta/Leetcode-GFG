class Solution {
public:
    bool f(vector<int>& candies, long long k, int val) {
        long long count = 0;
        for(int it: candies) {
            count += it / val;
        }
        return count >= k;
    }
    
    int maximumCandies(vector<int>& candies, long long k) {
        int left = 1;
        int right = INT_MIN;
        long long sum = 0;
        for(int candy: candies) { 
            right = max(right, candy);
            sum += candy;
        }
        if(sum < k) {return 0;}
        long long result = 0;
        while(left <= right) {
            long long mid = left + (right - left) / 2;
            if(f(candies, k, mid)) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }
};